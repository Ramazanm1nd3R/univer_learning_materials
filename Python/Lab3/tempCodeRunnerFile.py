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

