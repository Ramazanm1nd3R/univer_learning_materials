# 0.1 - dictinories

#1
file = 'D:/Files/Univer/Python/Lab6/words.txt'   
tempFile = open(file, 'r')
words = tempFile.read().split()
tempFile.close()

wordDict = {}
for j in words:
    wordDict[j] = None

print(wordDict)


#2
dayCounts = {'Mon': 0, 'Tue': 0, 'Wed': 0, 'Thu': 0, 'Fri': 0, 'Sat': 0, 'Sun': 0}
fileName = 'D:/Files/Univer/Python/Lab6/mbox.txt'
temporyFile = open(fileName, 'r')
for line in temporyFile:
    if line.startswith('From'):
        words = line.split()
        if len(words) >= 3:
            day = words[2]
            dayCounts[day] += 1
temporyFile.close()
print(dayCounts)


#3
emailCounts = {}
fileName = 'D:/Files/Univer/Python/Lab6/3tsk.txt'
temporyFile = open(fileName, 'r')
for line in temporyFile:
    if line.startswith('From'):
        words = line.split()
        email = words[1]
        emailCounts[email] = emailCounts.get(email, 0) + 1
temporyFile.close()
print(emailCounts)


#4
def find_most_messages(email_counts):
    max_email = None
    max_count = -1
    for email, count in email_counts.items():
        if count > max_count:
            max_email = email
            max_count = count
    return max_email, max_count


emailCounts = {}
fileName = 'D:/Files/Univer/Python/Lab6/3tsk.txt'
temporyFile = open(fileName, 'r')
for line in temporyFile:
    if line.startswith('From'):
        words = line.split()
        email = words[1]
        emailCounts[email] = emailCounts.get(email, 0) + 1
temporyFile.close()
print(emailCounts)
max_email, max_count = find_most_messages(emailCounts)
print(f"'{max_email}' max with {max_count} messages")



#5
counts = {}
file = 'D:/Files/Univer/Python/Lab6/5tsk.txt'
file = open(file, 'r')

for line in file:
    if line.startswith('From'):
        words = line.split()       
        email = words[1]        
        domain = email.split('@')[1]
        counts[domain] = counts.get(domain, 0) + 1

file.close()
print(counts)


#tasks

#1
favMusicians = {
    "rock": ["Led Zeppelin", "Queen", "The Beatles"],
    "pop": ["Michael Jackson", "Madonna", "Beyoncé"],
    "hip_hop": ["Eminem", "Jay-Z", "Kendrick Lamar"],
    "jazz": ["Miles Davis", "John Coltrane", "Ella Fitzgerald"]
}
print(favMusicians)


#3
inpt = input("Enter your weight, favorite color, or actor: ")
user_input = inpt.lower()
    
if user_input in favMusicians:
    print(favMusicians[user_input])
else:
    print("Sorry, no favorite musicians found for that input.")


#5
def max_dct(*dicts):
    res = {}
    for dct in dicts:
        for key, value in dct.items():
            if key in res:
                res[key] = max(res[key], value)
            else:
                res[key] = value
    return res

def sum_dct(*dicts):
    res = {}
    for dct in dicts:
        for key, value in dct.items():
            if key in res:
                res[key] += value
            else:
                res[key] = value
    return res



# 0.2 - tuples

#1
bb = (1,6,2,3,5,3,9,10)
print(f"avg:{sum(bb)/len(bb)}, max:{max(bb)}, min:{min(bb)}")



#3
sales1 = (
    ("January", 100),
    ("February", 150),
    ("March", 200),
    ("April", 180),
    ("May", 220),
    ("June", 190),
    ("July", 210),
    ("August", 230),
    ("September", 170),
    ("October", 250),
    ("November", 180),
    ("December", 200)
)

max_month, min_month, max_sales, min_sales = None, None, None, None

for month, sales in sales1:
    if max_sales is None or sales > max_sales:
        max_month = month
        max_sales = sales
    if min_sales is None or sales < min_sales:
        min_month = month
        min_sales = sales
print(f"max month {max_month} - {max_sales}, min month {min_month} - {min_sales}")



#5
books = (
    ("Мастер и Маргарита", "Михаил Булгаков", 1966),
    ("Преступление и наказание", "Фёдор Достоевский", 1866),
    ("Война и мир", "Лев Толстой", 1869),
    ("1984", "Джордж Оруэлл", 1949),
    ("Унесённые ветром", "Маргарет Митчелл", 1936)
)

print("Список книг в библиотеке:")
for book in books:
    print("Название:", book[0])
    print("Автор:", book[1])
    print("Год издания:", book[2])
    print()



#7
complx = (3 + 2j, 1 - 5j)
plusComp = complx[0] + complx[1]
minusComp = complx[0] - complx[1]
multComp = complx[0] * complx[1]

print(plusComp, minusComp, multComp)



#9
cities = (
    ("Almaty", "3kk", "coordinates: 43°15'24'' c.ш. 76°55'42'' в.д"),
    ("Symkent", "2kk", "coordinates: 35°15'19'' c.ш. 50°55'42'' в.д" )
)

for city in cities:
    print("город: ", city[0])
    print("население:", city[1])
    print("координаты: ", city[2])
    print()


#11
ages = (
    ("Mike", 23),
    ("Angella", 17),
    ("Robert", 52),
    ("Michel", 7),
    ("Gordan", 55),
    ("Nexia", 18)
)

pizdukCounter = 0
esheNeVzroslyCounter = 0
vzroslyeCounter = 0
starekiCounter = 0

for person in ages:
    if person[1] < 12:
        pizdukCounter += 1
    elif person[1] < 18:
        esheNeVzroslyCounter += 1
    elif person[1] < 50:
        vzroslyeCounter += 1
    else:
        starekiCounter += 1

print(f"pizduki: {pizdukCounter}, esheNeVzrosly: {esheNeVzroslyCounter}, 
      vzroslye: {vzroslyeCounter}, stareki: {starekiCounter}")



#13
planets = (
    ("Mercury", 4879, 57.9),
    ("Venus", 12104, 108.2),
    ("Earth", 12742, 149.6),
    ("Mars", 6779, 227.9),
    ("Jupiter", 139822, 778.6),
    ("Saturn", 116464, 1433.5),
    ("Uranus", 50724, 2872.5),
    ("Neptune", 49244, 4495.1)
)

maxDiam, minDiam = None, None
maxDpl, minDpl = "", ""
for pl in planets:
    if maxDiam is None or maxDiam < pl[1]:
        maxDiam = pl[1]
        maxDpl = pl[0]
    if minDiam is None or minDiam > pl[1]:
        minDiam = pl[1]
        minDpl = pl[0]

print(f"maxDiam is {maxDpl} : {maxDiam}, minDiam is {minDpl} : {minDiam}") 



#15
strings_tuple = ("apple", "banana", "orange")

char_counts = {}

for string in strings_tuple:
    for char in string:
        char_counts[char] = char_counts.get(char, 0) + 1

for char, count in char_counts.items():
    print(f"'{char}': {count}")



#17

events = (
    ("08:00", "10:00"), 
    ("12:00", "14:00"), 
    ("16:00", "18:00")  
)

def time_to_minutes(time_str):
    hours, minutes = map(int, time_str.split(':'))
    return hours * 60 + minutes

total_duration = 0


for start_time_str, end_time_str in events:
    start_time_minutes = time_to_minutes(start_time_str)
    end_time_minutes = time_to_minutes(end_time_str)
    duration_minutes = end_time_minutes - start_time_minutes
    total_duration += duration_minutes / 60  

print("Total duration of all events:", total_duration, "hours")




#19
kaspiWallet = (
    ("фигня", 500),
    ("еда", 1200),
    ("еда", 700),
    ("фигня", 300),
    ("еда", 1200)
)

edusum, fignasum = 0, 0

for category, amount in kaspiWallet:
    if category == "фигня":
        fignasum += amount
    if category == "еда":
        edusum += amount

categories = {"еда": edusum, "фигня": fignasum}
maxCat = max(categories, key=categories.get)
minCat = min(categories, key=categories.get)

print(f"Максимальные расходы: {maxCat}, Минимальные расходы: {minCat}")


