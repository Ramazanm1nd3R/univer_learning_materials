#1
file = '"C:\Users\p0\OneDrive\Desktop\Python labs\lab6_test.txt"'   
tempFile = open(file, 'r')
words = tempFile.read().split()
tempFile.close()

wordDict = {}
for j in words:
    wordDict[j] = None

print(wordDict)


#2
dayCounts = {'Mon': 0, 'Tue': 0, 'Wed': 0, 'Thu': 0, 'Fri': 0, 'Sat': 0, 'Sun': 0}
fileName = '"C:\Users\p0\OneDrive\Desktop\Python labs\lab6_test.txt"'
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
fileName = '"C:\Users\p0\OneDrive\Desktop\Python labs\lab6_test.txt"'
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
fileName = '"C:\Users\p0\OneDrive\Desktop\Python labs\lab6_test.txt"'
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
file = '"C:\Users\p0\OneDrive\Desktop\Python labs\lab6_test.txt"'
file = open(file, 'r')

for line in file:
    if line.startswith('From'):
        words = line.split()       
        email = words[1]        
        domain = email.split('@')[1]
        counts[domain] = counts.get(domain, 0) + 1

file.close()
print(counts)




#Tasks
#1
favorite_musicians = ["Bob Dylan", "The Beatles", "Pink Floyd", "Led Zeppelin", "David Bowie"]


#2
my_info = {
    "height": "6 feet",
    "favorite_color": "blue",
    "favorite_actor": "Tom Hanks",    
}


#3
def retrieve_info(info_key):
    if info_key in my_info:
        return my_info[info_key]
    else:
        return "Information not found."

user_input = input("Enter the information you want to know (height, favorite color, favorite actor): ").lower()
print(retrieve_info(user_input))


#4
favorite_songs = {
    "Bob Dylan": ["Like a Rolling Stone", "Blowin' in the Wind", "Knockin' on Heaven's Door"],
    "The Beatles": ["Hey Jude", "Let It Be", "Yesterday"],
    "Pink Floyd": ["Comfortably Numb", "Wish You Were Here", "Another Brick in the Wall"],
    "Led Zeppelin": ["Stairway to Heaven", "Whole Lotta Love", "Kashmir"],
    "David Bowie": ["Space Oddity", "Heroes", "Life on Mars?"]
}


#5
def max_dct(*dicts):
    result = {}
    for dct in dicts:
        for key, value in dct.items():
            if key in result:
                result[key] = max(result[key], value)
            else:
                result[key] = value
    return result

def sum_dct(*dicts):
    result = {}
    for dct in dicts:
        for key, value in dct.items():
            if key in result:
                result[key] += value
            else:
                result[key] = value
    return result



#Tuples
#5
library_books = (
    ("The Great Gatsby", "F. Scott Fitzgerald", 1925),
    ("To Kill a Mockingbird", "Harper Lee", 1960),
    ("1984", "George Orwell", 1949),
    ("Pride and Prejudice", "Jane Austen", 1813),
)

def books_published_within_period(start_year, end_year):
    books_within_period = []
    for book in library_books:
        title, author, publication_year = book
        if start_year <= publication_year <= end_year:
            books_within_period.append((title, author, publication_year))
    return books_within_period


start_year = int(input("Enter the start year: "))
end_year = int(input("Enter the end year: "))

print(f"Books published between {start_year} and {end_year}:")
for book in books_published_within_period(start_year, end_year):
    print(book)


#11
ages = (10, 25, 35, 45, 55, 65, 75, 85, 95)

def age_group_distribution(ages):
    age_groups = {
        "0-18": 0,
        "19-35": 0,
        "36-50": 0,
        "51+": 0
    }
    
    for age in ages:
        if age <= 18:
            age_groups["0-18"] += 1
        elif 19 <= age <= 35:
            age_groups["19-35"] += 1
        elif 36 <= age <= 50:
            age_groups["36-50"] += 1
        else:
            age_groups["51+"] += 1
    
    return age_groups

age_groups_count = age_group_distribution(ages)

print("Age Group Distribution:")
for group, count in age_groups_count.items():
    print(f"{group}: {count}")
    

#13
solar_system_planets = (
    ("Mercury", 4879, 57.9),
    ("Venus", 12104, 108.2),
    ("Earth", 12756, 149.6),
    ("Mars", 6792, 227.9),
    ("Jupiter", 142984, 778.6),
    ("Saturn", 120536, 1433.5),
    ("Uranus", 51118, 2872.5),
    ("Neptune", 49528, 4495.1)
)

def planet_with_smallest_and_largest_diameter(planets):
    smallest_diameter_planet = min(planets, key=lambda x: x[1])
    largest_diameter_planet = max(planets, key=lambda x: x[1])
    return smallest_diameter_planet, largest_diameter_planet

smallest, largest = planet_with_smallest_and_largest_diameter(solar_system_planets)

print("Planet with the smallest diameter:", smallest[0])
print("Planet with the largest diameter:", largest[0])
   

#20
def fibonacci_sequence(limit):
    if limit <= 0:
        return ()

    fibonacci = (0, 1)
    while True:
        next_number = fibonacci[-1] + fibonacci[-2]
        if next_number <= limit:
            fibonacci += (next_number,)
        else:
            break
    return fibonacci

limit = int(input("Enter the limit for the Fibonacci sequence: "))

sequence = fibonacci_sequence(limit)

print("Fibonacci sequence up to", limit, ":")
print(sequence)



