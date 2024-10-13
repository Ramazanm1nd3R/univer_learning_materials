#1
def task1(listlist):
    sevenindexes = []
    for i in range(len(listlist)):
        if listlist[i] == 7:
            sevenindexes.append(i+1)
    return sevenindexes

listlist = []
n = int(input("enter the length of list: "))
for i in range(n):
    print(f"enter the {i+1}-th el")
    el = int(input())
    listlist.append(el)
print(task1(listlist))


#2
def task2(listlist):
    theArtCount = 0
    theArtList = []
    for i in range(len(listlist)):
        if listlist[i] == "the":
            theArtCount += 1
            theArtList.append(i+1)
    return theArtCount,theArtList

n = int(input("enter the length of list with articles: "))
listtask2 = []
for i in range(n):
    print(f"enter the {i+1}-the article")
    el = input()
    listtask2.append(el)
print(task2(listtask2))


#3
#1 method
listlist = []
for i in range(10):
    print(f"enter the {i+1}-th el: ", sep="")
    num = int(input())
    listlist.append(num)
print(listlist)

#2 method
listlist = [1,2,3,4,5,6,7,8,9,10]

#3 method
listlist = [1]*10

#4 method
listlist = list((1,) + (2,) + (3,) + (4,) + (5,) + (6,) + (7,) + (8,) + (9,) + (10,))
print(listlist)


#4
listlist = []
stopper = True
while stopper:
    num = input()
    if num.isdigit():
        el = int(num)
        listlist.append(el)
    else:
        stopper = False
print(f"length of list {len(listlist)}, maximal number {max(listlist)}, minial {min(listlist)}")

#5
listlist = []
stopper = True
counter = 0
while stopper:
    counter += 1
    print(f"enter the {counter}-th element: ", end="")
    num = input()
    if num.isdigit():
        el = int(num)
        listlist.append(el)
    else:
        stopper = False

print(listlist)

stopper = True
while stopper:
    print("enter the index of the element you want to change: ", end="")
    index = input()
    if index.isdigit():
        index = int(index)
        if index < len(listlist):
            print(f"enter the new value for the element at index {index}: ", end="")
            newnum = input()
            if newnum.isdigit():
                newnum = int(newnum)
                listlist[index] = newnum
            else:
                stopper = False
        else:
            print("invalid index. Please enter a valid index.")
    else:
        stopper = False

print(listlist)


#6

def func1(listlist):
    listlist.pop()
    return listlist

def func2(index,listlist):
    listlist.pop(index)
    return listlist

def func3(input,listlist):
    listlist.remove(input)
    return listlist

def func4(listlist):
    listlist.clear()
    return listlist

fathers = ['James Gosling', 'Rasmus Lerdorf', 'Matthias Felleisen', 'Guido van Rossum', 'Larry Wall', 'Bjarne Stroustrup','Yukihiro Matsumoto']
print(f"дан список {fathers}")
while True:
    print("какое удаление вы хотите произвести, выберите из предложенного и введите номер:","\n"
          ,"1. Хочу удалить элемент из конца списка","\n"
          ,"2. Удалить конкретный элемент по индексу","\n"
          ,"3. Удалить конкретный элемент по его имени","\n"
          ,"4. Очистить список")
    x = int(input())
    if x == 1:
        print(f"отлично вот ваш результат {func1(fathers)}")
        break
    elif x == 2:
        print("для этого способа вам еще потребуется ввести индекс:",end="")
        ind = int(input())
        print(f"отлично вот ваш результат {func2(ind,fathers)}")
        break
    elif x == 3:
        print("для этого метода вам потребуется ввести слово")
        word = input()
        print(f"отлично вот ваш результат {func3(word,fathers)}")
        break
    elif x == 4:
        print(f"отлично вот ваш результат {func4(fathers)}")
        break
    else:
        print("введен некорректный номер. Пожалуйста, введите число от 1 до 4.")


#7
#1th method
list1 = ["Ala","Kos","Shym","Akt"]
list2 = list1
print(list2)

#2th method 
list1 = ["Ala","Kos","Shym","Akt"]
list2 = list1.copy()
print(list2)

#3th method
list1 = ["Ala","Kos","Shym","Akt"]
list2 = list(list1)
print(list2)


#8
list1 = ["bir", "eki", "ush", "tort"]
new_list = []

for i in range(len(list1) - 1, -1, -1):
    new_list.append(list1[i])

print(new_list)


#9
fruits = ['orange', 'melon', 'apple', 'banana', 'watermelon', 'pineapple']
i = 0
while i < len(fruits):
    if i != len(fruits)-1:
        print(fruits[i],end=", ")
    else:
        print(fruits[i])
    i+= 1


#10
numbers = [3, 4, 7, 1, 2, 8, 9, 5, 6]
sort_list = sorted(numbers)
print(sort_list)

numbers = [3, 4, 7, 1, 2, 8, 9, 5, 6]
sort_list = sorted(numbers,reverse=True)
print(sort_list)


#11
words = ['Australia', 'Eurasia', 'Africa', 'continent', 'land', 'North America', 'population', 'South America', 'race', 'language']
sorted_sensitive = sorted(words, key=lambda x: x)
print("Сортировка с учетом регистра:", sorted_sensitive)

sorted_insensitive = sorted(words, key=lambda x: x.lower())
print("Сортировка без учета регистра:", sorted_insensitive)

#12
animals = ['tiger', 'bear', 'lion', 'wolf', 'fox', 'zebra', 'eagle', 'penguin', 'dog', 'cat']
animals.reverse()
print("Используя метод reverse():", animals)

animals = ['tiger', 'bear', 'lion', 'wolf', 'fox', 'zebra', 'eagle', 'penguin', 'dog', 'cat']
reversed_animals = animals[::-1]
print("Используя срезы:", reversed_animals)


#13
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print("odd numbers:",end=" ")
for i in numbers:
    if i % 2 != 0:
        print(i,end=" ")


#14
pl = 'Python'
print("ASCII elments: ")
for i in pl:
    print(ord(i),end=" ")


#15
#1th
words = ['d@ll', 'b@ll', 'go@l', 'f@ll', '@mb@ss@dor', 'c@pit@l']
new_words = []
for word in words:
    new_word = word.replace('@', 'a')
    new_words.append(new_word)
print(new_words)

#2th
words = ['d@ll', 'b@ll', 'go@l', 'f@ll', '@mb@ss@dor', 'c@pit@l']
new_words = list(map(lambda word: word.replace('@', 'a'), words))
print(new_words)

#3th
words = ['d@ll', 'b@ll', 'go@l', 'f@ll', '@mb@ss@dor', 'c@pit@l']
new_words = [word.replace('@', 'a') for word in words]
print(new_words)


#16
#1th 
numbers = [-5, 4, 0, -3, 5, -2, 8, 2, -1]
pos_nums = []
for i in numbers:
    if i > 0:
        pos_nums.append(i)
print(pos_nums)

#2th используя генератор списков
numbers = [-5, 4, 0, -3, 5, -2, 8, 2, -1]
positive_numbers = [num for num in numbers if num > 0]
print(positive_numbers)


#17
numbers = [7, 10, 15, 56, 40, 32, 5, 12, 17, 24, 22, 53, 31]
for i in numbers:
    if i % 20 == 0:
        print("FizzBuzz", end="|")
    elif i % 4 == 0:
        print("Fizz", end="|")
    elif i % 5 == 0:
        print("Buzz", end="|")
    elif i % 12 != 0:
        print("the number is neither Fizz nor Buzz", end="|")


#18
elements = [2, 3, 4, 5, 25, 16, 9, 4]
for i in range(len(elements) // 2):
    print(elements[i], elements[-(i+1)])


#19
listlist = []
for i in range(50):
    if i % 2 != 0:
        listlist.append(i)
print(listlist)


#20
listlist = list(range(0,100))

while True:
    inpt = input("введи любое число или на крайняк X что бы остановить программу ")
    if inpt.lower() == "x":
        print("программа остановлена")
        break
    if not inpt.isdigit():
        print("введи число дебил, даю еще попытку")
        continue

    inpt = int(inpt)

    if inpt in listlist:
        print("да есть такая цифра")
    else:
        print("сорри такой нету")