# #1
# class Employee:
#     def __init__(self, name, age, empInfo):
#         self.name = name
#         self.age = age
#         self.empInfo = empInfo
    
#     def displayInfo(self):
#         print(f"name: {self.name}, age: {self.age}, employee Info: {self.empInfo}")

# employee1 = Employee("Максим Максимов", 30, "Работник довольно прилежный")
# employee1.displayInfo()


# #2
# class Car:
#     def __init__(self, model, color, bornYear):
#         self.model = model 
#         self.color = color
#         self.bornYear = bornYear
    
#     def displayInfo(self):
#         print(f'model: {self.model}, color: {self.color}, year: {self.bornYear}')

# car1 = Car('мерседес бенс', 'розовый', 1999)
# car1.displayInfo()


# #3
# class Rectangle:
#     def __init__(self, firstSide, secondSide):
#         self.firstSide = firstSide
#         self.secondSide = secondSide
    
#     def displayInfo(self):
#         print(f'площадь {self.firstSide * self.secondSide}, периметр {(self.firstSide + self.secondSide) * 2}')

# rect1 = Rectangle(7,8)
# rect1.displayInfo()



# #4
# class BankAccount:
#     def __init__(self, AccauntBalance):
#         self.AccauntBalance = AccauntBalance
    
#     def depositingAcc(self, money):
#         self.AccauntBalance += money
#         print('пополнено')
    
#     def exportAcc(self, money):
#         if money <= self.AccauntBalance:
#             self.AccauntBalance -= money
#             print('успешно снято')
#         else:
#             print('недостаточно средств')

#     def displayInfo(self):
#         print(f'на аккаунте: {self.AccauntBalance} тг')

# user1 = BankAccount(0)

# while True:
#     print("добро пожаловать в банк! Выберите операцию: 'СНЯТЬ', 'ДЕПОЗИТ', 'ИНФО' или 'ВЫХОД'")
#     operation = input().lower()
    
#     if operation == 'снять':
#         amount = int(input('введите сумму: '))
#         user1.exportAcc(amount)
#     elif operation == 'депозит':
#         amount = int(input('введите сумму: '))
#         user1.depositingAcc(amount)
#     elif operation == 'инфо':
#         user1.displayInfo()
#     elif operation == 'выход':
#         print('до свидания')
#         break
#     else:
#         print('неверная операция')

# #5
# class Student:
#     def __init__(self, StudentName, StudentBorn, Scores):
#         self.StudentName = StudentName
#         self.StudentBorn = StudentBorn
#         self.Scores = Scores

#     def displayInfo(self):
#         print(f'имя учащегося: {self.StudentName}')
#         print(f'возраст: {self.StudentBorn}')
#         print(f'оценки: {self.Scores}')
#         print(f'средняя оценка {round(sum(self.Scores)/len(self.Scores), 2)}')
# student1 = Student('Темирлан', '2006', [70, 70, 80, 100, 90, 50])
# student1.displayInfo()

# #6
# class Triange:
#     def __init__(self, side1, side2, side3):
#         self.side1 = side1
#         self.side2 = side2
#         self.side3 = side3
    
#     def checkType(self):
#         if self.side1 == self.side2 == self.side3:
#             return 'равносторонний'
#         elif self.side1 == self.side2 or self.side1 == self.side3 or self.side2 == self.side3: 
#             return 'равнобедренный'
#         else:
#             return 'скалярный'

# print('введи стороны триугольника: ', end='')
# a, b, c = map(int,input().split())        
# triangle1 = Triange(a, b, c)
# print(triangle1.checkType())


# #7
# class Book:
#     def __init__(self, bookName, bookAuthor, bookYear):
#         self.bookName = bookName
#         self.bookAuthor = bookAuthor
#         self.bookYear = bookYear
    
#     def displayInfo(self):
#         print(f'book name: {self.bookName}')
#         print(f'author: {self.bookAuthor}')
#         print(f'year: {self.bookYear}')

# book1 = Book('Капитал', 'Карл Маркс', 1867)
# book1.displayInfo()


# #8
# class Circle:
#     def __init__(self, circleRadius):
#         self.circleRadius = circleRadius
    
#     def calculateAndDisplay(self):
#         print(f'окружность: {2 * 3.14 * self.circleRadius}, площадь: {3.14 * (self.circleRadius)**2}')

# r = int(input())
# circle1 = Circle(r)
# circle1.calculateAndDisplay()


# #9
# class Task:
#     def __init__(self, description, status):
#         self.description = description
#         self.status = status
    
#     def inputTask(self, inputDes, inputStatus):
#         self.description = inputDes
#         self.status = inputStatus

#     def checkInfo(self):
#         print(f'задание: {self.description}')
#         print(f'статус: {self.status}')

# while True:
#     print('какая операция вам необходима: "ДОБАВИТЬ", "ПРОСМОТРЕТЬ": ', end='')
#     baboba = input().lower()

#     if baboba == 'добавить':
#         print('введите описание задачи: ', end='')
#         description = input()
#         print('введите статус задачи (выполнено/не выполнено): ', end='')
#         status = input()
#         task = Task(description, status)
#     elif baboba == 'просмотреть':
#         task.checkInfo()
#     else:
#         print('некорректная операция')



# #10
# class Computer:
#     def __init__(self, CPU, GPU, RAM, RAMspeed):
#         self.CPU = CPU
#         self.GPU = GPU
#         self.RAM = RAM
#         self.RAMspeed = RAMspeed
    
#     def displayInfo(self):
#         print(f'процессор: {self.CPU}')
#         print(f'видеокарта: {self.GPU}')
#         print(f'оперативная память: {self.RAM} gb, {self.RAMspeed} mhz')

# pc1 = Computer('intel core i7-12700k', 'nvidia geforce RTX 3060', 32, 4800)
# pc1.displayInfo()


# #11
# class House:
#     def __init__(self, floorCount, homeSqare, address):
#         self.floorCount = floorCount
#         self.homeSqare = homeSqare
#         self.address = address

#     def displayInfo(self):
#         print(f'количество комнат: {self.floorCount}') 
#         print(f'площадь дома: {self.homeSqare}')
#         print(f'адрес: {self.address}')

# home1 = House(3,'70 квадратных метров', 'кабанбая 23')
# home1.displayInfo()



# #12
# class Product:
#     def __init__(self, name, price, countOnWarehouse):
#         self.name = name
#         self.price = price
#         self.countOnWarehouse = countOnWarehouse

#     def displayInfo(self):
#         print(f'название: {self.name}')
#         print(f'цена: {self.price} тг')
#         print(f'количество на складе: {self.countOnWarehouse} коробок по 20 штук')

# product1 = Product('орео', 300, 400)
# product1.displayInfo()

# #13
# class Address:
#     def __init__(self, street, city, postIndex, country):
#         self.street = street
#         self.city = city
#         self.postIndex = postIndex
#         self.country = country

#     def distplayInfo(self):
#         print(f'улица: {self.distplayInfo}')
#         print(f'город: {self.city}')
#         print(f'почтовый индекс: {self.postIndex}')
#         print(f'страна: {self.country}')
# add1 = Address('темерязева', 'Алмата', '160006', 'Казахстан')
# add1.distplayInfo()



# #14
# class Job:
#     def __init__(self, pos, salary, req):
#         self.pos = pos
#         self.salary = salary
#         self.req = req
    
#     def displayInfo(self):
#         print(f'должность: {self.pos}')
#         print(f'зарплата: {self.salary} тг')
#         print(f'требование/я: {self.req}')

# job1 = Job('администратор', 180000, 'говорить свободно на Казахском')
# job1.displayInfo()


# #15
# class Team:
#     def __init__(self, name, players):
#         self.name = name
#         self.players = players
    
#     def displayInfo(self):
#         print(f'Название команды: {self.name}')
#         print('Список игроков:')
#         for player in self.players:
#             print(player)

# team1 = Team('Астана', ['Иванов', 'Петров', 'Сидоров'])
# team1.displayInfo()

# #16
# class Planet:
#     def __init__(self, name, radius, distance):
#         self.name = name
#         self.radius = radius
#         self.distance = distance
    
#     def displayInfo(self):
#         print(f'Планета: {self.name}')
#         print(f'Радиус: {self.radius} км')
#         print(f'Расстояние от Солнца: {self.distance} млн. км')

# planet1 = Planet('Земля', 6371, 149.6)
# planet1.displayInfo()



# #17
# class Movie:
#     def __init__(self, title, director, year):
#         self.title = title
#         self.director = director
#         self.year = year
    
#     def displayInfo(self):
#         print(f'Название: {self.title}')
#         print(f'Режиссер: {self.director}')
#         print(f'Год выпуска: {self.year}')

# movie1 = Movie('Титаник', 'Джеймс Кэмерон', 1997)
# movie1.displayInfo()



# #18
# class Luggage:
#     def __init__(self, weight, size, luggageType):
#         self.weight = weight
#         self.size = size
#         self.luggageType = luggageType
    
#     def displayInfo(self):
#         print(f'Вес: {self.weight} кг')
#         print(f'Размер: {self.size} см')
#         print(f'Тип багажа: {self.luggageType}')

# luggage1 = Luggage(15, '50x40x20', 'Ручная кладь')
# luggage1.displayInfo()



# #19
# class Chair:
#     def __init__(self, color, material, comfortLevel):
#         self.color = color
#         self.material = material
#         self.comfortLevel = comfortLevel
    
#     def displayInfo(self):
#         print(f'Цвет: {self.color}')
#         print(f'Материал: {self.material}')
#         print(f'Уровень комфорта: {self.comfortLevel}')

# chair1 = Chair('Красный', 'Дерево', 'Высокий')
# chair1.displayInfo()



# #20
# class Store:
#     def __init__(self, name, address, products):
#         self.name = name
#         self.address = address
#         self.products = products
    
#     def displayInfo(self):
#         print(f'Название магазина: {self.name}')
#         print(f'Адрес: {self.address}')
#         print('Список товаров:')
#         for product in self.products:
#             print(product)

# store1 = Store('Магнит', 'ул. Ленина, 123', ['Хлеб', 'Молоко', 'Сахар'])
# store1.displayInfo()
