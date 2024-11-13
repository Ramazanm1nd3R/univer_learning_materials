# Константы для Galois Field (GF(256))
GF_SIZE = 256
GF_POLY = 0x11D  # Полином для GF(2^8), используемый в RS кодировании

# Таблицы для ускорения арифметики в GF(256)
gf_exp = [1] * GF_SIZE
gf_log = [0] * GF_SIZE

# Создаем таблицы для быстрого возведения в степень и логарифма в GF(256)
x = 1
for i in range(1, GF_SIZE):
    x <<= 1
    if x & GF_SIZE:
        x ^= GF_POLY
    gf_exp[i] = x
    gf_log[x] = i

# Функция для умножения в GF(256)
def gf_multiply(x, y):
    # Если хотя бы один из элементов равен нулю, результат будет нулем
    if x == 0 or y == 0:
        return 0
    # Иначе мы складываем логарифмы x и y, затем находим результат по таблице экспонент
    log_sum = gf_log[x] + gf_log[y]
    return gf_exp[log_sum % (GF_SIZE - 1)]

# Функция для деления в GF(256)
def gf_divide(x, y):
    # Если делимое равно нулю, результат будет нулем
    if x == 0:
        return 0
    # Иначе мы вычитаем логарифм y из логарифма x и находим результат по таблице экспонент
    log_diff = gf_log[x] - gf_log[y]
    return gf_exp[log_diff % (GF_SIZE - 1)]

# Функция для полиномиального деления
def polynomial_division(dividend, divisor):
    out = dividend.copy()
    for i in range(len(dividend) - len(divisor) + 1):
        coeff = out[i]
        if coeff != 0:
            for j in range(1, len(divisor)):
                out[i + j] ^= gf_multiply(divisor[j], coeff)
    return out[-(len(divisor) - 1):]

# Функция для умножения двух полиномов
def polynomial_multiply(poly1, poly2):
    # Инициализируем результат нулями
    result = [0] * (len(poly1) + len(poly2) - 1)
    for i in range(len(poly1)):
        for j in range(len(poly2)):
            result[i + j] ^= gf_multiply(poly1[i], poly2[j])
    return result

# Функция для создания генераторного полинома
def generate_generator_poly(n_symbols):
    g = [1]
    for i in range(n_symbols):
        g = polynomial_multiply(g, [1, gf_exp[i]])
    return g

# Кодирование данных
def rs_encode(data, n_symbols):
    generator = generate_generator_poly(n_symbols)
    padded_data = data + [0] * n_symbols
    remainder = polynomial_division(padded_data, generator)
    return data + remainder  # Закодированное слово (данные + проверочные символы)

# Симуляция ошибки в закодированном сообщении
def introduce_error(message, error_pos, error_value):
    message[error_pos] += error_value
    return message

# Функция для обнаружения и исправления ошибок
def simple_error_correction(message, original_message):
    for i, (m, o) in enumerate(zip(message, original_message)):
        if m != o:
            print(f"Ошибка найдена на позиции: {i + 1}, корректное значение: {o}")
            message[i] = o  # Исправляем значение
    return message[:len(original_message)]  # Возвращаем только оригинальное сообщение