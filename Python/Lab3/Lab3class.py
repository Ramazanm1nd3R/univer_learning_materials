#1
text = input()
max_length = 0
current_length = 0

for char in text:
    if char.isdigit():
        current_length += 1
        max_length = max(max_length, current_length)
    else:
        current_length = 0
print("max lenght:", max_length)


#2
text = input()
check = False

for char in text:
    if not char.isalpha() and not char.isspace():
        check = True
        break

if check:
    print("содержит")
else:
    print("не содержит")



#3
text = input()
index = 0
new_text = ""

for char in text:
    if char == "*":
        break
    elif char.islower():
        new_text += "3"
    else:
        new_text += char

print(new_text)


#4
text = input()
index = 0
new_text = ""

for char in text:
    if char == "+":
        break
    elif char.islower():
        new_text += "-"
    else:
        new_text += char

print(new_text)


#5
text = input()
new_text = ""
found_lower = False

for char in text:
    if char.islower():
        found_lower = True
    elif found_lower:
        new_text += "."
    new_text += char

print(new_text)


#6
n = int(input())

sot = ["сто", "двести", "триста", "четыреста", "пятьсот",
       "шестьсот", "семьсот", "восемьсот", "девятьсот"]
des = ["десять", "двадцать", "тридцать", "сорок", "пятьдесят",
       "шестьдесят", "семьдесят", "восемьсот", "девяносто"]
odin = ["", "один", "два", "три", "четыре", "пять", "шесть",
        "семь", "восемь", "девять", "десять", "одиннадцать",
        "двенадцать", "тринадцать", "четырнадцать", "пятнадцать",
        "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать"]

result = ""

# Сотни
if n >= 100:
    result += sot[n // 100 - 1]
    n %= 100
    if n > 0:
        result += " "

# Десятки
if n >= 10 and n <= 19:
    result += odin[n]
elif n >= 20:
    result += des[n // 10 - 1]
    n %= 10
    if n > 0:
        result += " "

# Единицы
if n > 0 and n <= 9:
    result += odin[n]

print(result)


#7
n = input()
lengthcounter = 0
tiyin, tenge = [], []

for i in range(len(n)):
    lengthcounter += 1
    if lengthcounter > 2:
        tiyin.append(n[i])
    else:
        tenge.append(n[i])


print(f"{int(''.join(tenge))} tenge and {int(''.join(tiyin))} tiyin")



#8
text = input()
let_counter, dig_counter, sign_counter = 0, 0, 0
is_letG, is_digG, is_signG = True, True, True

for i in text:
    if i.isalpha():  # проверяет на букву
        if is_letG:
            let_counter += 1
            is_letG = False
        is_digG, is_signG = True, True
    elif i.isdigit():  # проверка на цифру
        if is_digG:
            dig_counter += 1
            is_digG = False
        is_letG, is_signG = True, True
    elif i in ['+', '-', '*']: # сопоставление со значениями из списка
        if is_signG:
            sign_counter += 1
            is_signG = False
        is_letG, is_digG = True, True
    else:
        is_letG, is_digG, is_signG = True, True, True

print("Количество групп букв:", let_counter)
print("Количество групп цифр:", dig_counter)
print("Количество групп знаков:", sign_counter)

if let_counter > dig_counter:
    print(f"групп букв больше чем цифр на {let_counter - dig_counter}")
elif let_counter == dig_counter:
    print("количество групп равны")
else:
    print(f"групп цифр больше чем букв на {dig_counter - let_counter}")



#9
text = input()
f_counter = 0
let_group_counter = 0
first_check, last_check = "",""

for i in text:
    if i.isalpha():
        if i == "f":
            f_counter += 1
        if not first_check:
            first_check = i
        last_check = i
    else:
        if first_check and first_check == last_check:
            let_group_counter += 1
        first_check, last_check = "",""
print(f"f conter: {f_counter}")
print(f"group num: {let_group_counter}")

#10
text = input("Enter the text: ")

letter_groups = []
current_letter_group = ""

digit_groups = []
current_digit_group = ""

for char in text:
    if char.isalpha() and char.lower() == 'a':
        current_letter_group += char
    elif char.isdigit():
        current_digit_group += char
    else:
        if len(current_letter_group) >= 2:
            letter_groups.append(current_letter_group)
        current_letter_group = ""

        if current_digit_group:
            digit_groups.append(current_digit_group)
        current_digit_group = ""

# Проверяем последние группы после завершения цикла
if len(current_letter_group) >= 2:
    letter_groups.append(current_letter_group)

if current_digit_group:
    digit_groups.append(current_digit_group)

# Находим самую длинную группу цифр
max_length_group = ""
max_length = 0
for group in digit_groups:
    if len(group) > max_length:
        max_length = len(group)
        max_length_group = group

print("Groups of letters containing 'a' at least twice:", letter_groups)
print("Longest group of digits:", max_length_group)


#11
text = input()
texttolist = list(text)

for i in range(len(texttolist) - 1):  
    if not texttolist[i].islower() and texttolist[i + 1].isdigit():
        texttolist[i + 1] = "*"
    else:
        break

res = ''.join(texttolist)
print(res)


#13
n = int(input("Enter the length of the string: "))
print(f"Enter the string with {n} length: ")
x_counter = 0
strr = input()

if len(strr) != n:
    print("Error, incorrect input")
else:
    for i in range(n):
        if strr[i] == "x":
            x_counter += 1

    print(f"'x' count is {x_counter}")


#14
n = int(input("enter the length of the string: "))
print(f"enter the string with {n} length: ")
strr = input()
plus_counter, umnozhenier_counter = 0, 0
for i in strr:
    if i == "+":
        plus_counter += 1
    elif i == "*":
        umnozhenier_counter += 1
print(f"'+' {plus_counter} shtuk")
print(f"'*' {umnozhenier_counter} shtuk")


#15
n = int(input("enter the length of the string: "))
print(f"enter the string with {n} length: ")
strr = input()
str_list = list(strr)

for i in range(len(str_list)):
    if str_list[i] == "!":
        str_list[i] = "."
    elif str_list[i] == ".":
        str_list[i] = "..."
res = "".join(str_list)
print(res)

#16
n = int(input("enter the length of the string: "))
print(f"enter the string with {n} length: ")
strr = input()
str_list = list(strr)
is_check = False
for i in range(n - 1):
    if str_list[i] == "," and str_list[i + 1] == "-":
        is_check = True
if is_check:
    print("posledovatelnost ,- est")
else:
    print("netu")


#17
n = int(input("Enter the length of the string: "))
print(f"Enter the string with {n} length: ")
strr = input()
str_list = list(strr)
is_check = False


if len(strr) != n:
    print("incorrect input")
else:
    for i in range(n - 1):
        if str_list[i] == "a" and str_list[i + 1] == "a":
            is_check = True
    if is_check:
        print("double 'a' est")
    else:
        print("0")


#18
sequence = input("Enter the sequence: ")

# Проверяем, содержит ли строка хотя бы один пробел
contains_space = sequence.find(' ') != -1

print("Contains space:", contains_space)


#19
