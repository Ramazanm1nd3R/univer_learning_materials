#1
nums = []
total = 0
count = 0
while True:
    a = input()
    if a.isdigit():
        num = int(a)
        nums.append(num)
        total += num
        count += 1
    elif a == "Done":
        break
    else:
        print("error")
        break
if nums:
    print(total,total/count)

#2
nums = []
while True:
    a = input()
    if a.isdigit():
        num = int(a)
        nums.append(num)
    elif a == "Done":
        break
    else:
        print("error")
        break
if nums:
    print(max(nums),min(nums))