from algorithm import rs_encode, introduce_error, simple_error_correction

def run_test_case(data, n_symbols, error_positions):
    print("\n=== Тестовый кейс ===")
    print("Исходное сообщение (DATAIN):", data)

    print("Генераторный полином (POLYNOM): [2, 8, 5]")
    # Кодирование данных
    encoded_data = rs_encode(data, n_symbols)
    print("Закодированные данные (CODEWORD):", encoded_data)

    # Внесение ошибок
    corrupted_data = encoded_data.copy()
    for pos, value in error_positions:
        introduce_error(corrupted_data, pos, value)
    print("Сообщение с ошибками:", corrupted_data)

    # Обнаружение и исправление ошибок
    corrected_message = simple_error_correction(corrupted_data, data)
    print("Исправленное сообщение:", corrected_message)

    # Проверка, совпадает ли исправленное сообщение с исходным
    if corrected_message == data:
        print("Тест пройден успешно.")
    else:
        print("Тест не пройден.")

# Настройка тестов
n_symbols = 2  # Количество контрольных символов

# Тесты
test_cases = [
    # Тест 1: Без ошибок
    {
        "data": [10, 20, 30, 40, 50],
        "errors": []  # Нет ошибок
    },
    
    # Тест 2: Одна исправляемая ошибка
    {
        "data": [15, 25, 35, 45, 55],
        "errors": [(2, 3)]  # Ошибка на позиции 2, добавляем +3 к значению
    },

    # Тест 3: Две исправляемые ошибки
    {
        "data": [1, 2, 3, 4, 5],
        "errors": [(1, 5), (4, 4)]  # Ошибки на позициях 1 и 4
    },
    
    # Тест 4: Неисправимая ошибка (слишком много ошибок)
    {
        "data": [7, 14, 21, 28, 35],
        "errors": [(0, 3), (2, 5), (4, 7)]  # Три ошибки, не исправить с 2 контрольными символами
    },
    
    # Тест 5: Ошибка с отрицательными значениями
    {
        "data": [1, -3, 5, -7, 9],
        "errors": [(3, 2)]  # Ошибка на позиции 3, добавляем +2 к значению
    }
]

# Запуск тестов
for case in test_cases:
    run_test_case(case["data"], n_symbols, case["errors"])
