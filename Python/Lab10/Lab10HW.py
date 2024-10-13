# #1
# class BankAccount:
#     def __init__(self, initialBalance=0):
#         self._balance = initialBalance
    
#     def deposit(self, amount):
#         self._balance += amount
#         print('средства успешно внесены')
    
#     def withdraw(self, amount):
#         if amount <= self._balance:
#             self._balance -= amount
#             print('успешно сняты')
#         else:
#             print('недостаточно средств')

#     def display_info(self):
#         print(f'на счету: {self._balance} тг')

# user1 = BankAccount()

# while True:
#     print("добро пожаловать в банк! Выберите операцию: 'СНЯТЬ', 'ДЕПОЗИТ', 'ИНФО' или 'ВЫХОД'")
#     operation = input().lower()
    
#     if operation == 'снять':
#         amount = int(input('введите сумму: '))
#         user1.withdraw(amount)
#     elif operation == 'депозит':
#         amount = int(input('введите сумму: '))
#         user1.deposit(amount)
#     elif operation == 'инфо':
#         user1.display_info()
#     elif operation == 'выход':
#         print('до свидания!')
#         break
#     else:
#         print('неверная операция')


# #2
# import math

# class Shape:
#     def area(self):
#         pass
    
#     def perimeter(self):
#         pass

# class Circle(Shape):
#     def __init__(self, radius):
#         self.radius = radius
    
#     def area(self):
#         return math.pi * self.radius ** 2
    
#     def perimeter(self):
#         return 2 * math.pi * self.radius

# class Rectangle(Shape):
#     def __init__(self, width, height):
#         self.width = width
#         self.height = height
    
#     def area(self):
#         return self.width * self.height
    
#     def perimeter(self):
#         return 2 * (self.width + self.height)

# circle = Circle(5)
# print("площадь:", circle.area())
# print("периметр:", circle.perimeter())

# rectangle = Rectangle(4, 6)
# print("площадь:", rectangle.area())
# print("периметр:", rectangle.perimeter())


# #3
# class Animal:
#     def make_sound(self):
#         pass

# class Dog(Animal):
#     def make_sound(self):
#         return "Woof!"

# class Cat(Animal):
#     def make_sound(self):
#         return "Meow!"
# dog = Dog()
# cat = Cat()
# print(dog.make_sound())  
# print(cat.make_sound())  
    

# #4
# from abc import ABC, abstractmethod

# class Car(ABC):
#     def __init__(self, speed, fuelEfficiency):
#         self.speed = speed
#         self.fuel_efficiency = fuelEfficiency
    
#     @abstractmethod
#     def accelerate(self):
#         pass
    
#     @abstractmethod
#     def fuel_consumption(self):
#         pass

# class Bmw(Car):
#     def __init__(self, speed, fuelEfficiency):
#         super().__init__(speed, fuelEfficiency)
    
#     # переопределение методов

#     def accelerate(self):
#         return f"Accelerating bmw with speed {self.speed} km/h"
    
#     def fuel_consumption(self):
#         return f"No fuel consumption for bmw. Fuel efficiency: {self.fuelEfficiency} liters per 100 km"

# class Toyota(Car):
#     def __init__(self, speed, fuel_efficiency):
#         super().__init__(speed, fuel_efficiency)
    
#     # переопределение методов

#     def accelerate(self):
#         return f"Accelerating toyota with speed {self.speed} km/h"
    
#     def fuel_consumption(self):
#         return f"Calculating fuel consumption for toyota car. Fuel efficiency: {self.fuelEfficiency} liters per 100 km"

# bmw = Bmw(240, 15)
# toyota = Toyota(200, 20)

# print(bmw.accelerate())
# print(bmw.fuel_consumption())  

# print(toyota.accelerate())     
# print(toyota.fuel_consumption())    



# #5
# class Engine:
#     def start(self):
#         return "Engine started"

#     def stop(self):
#         return "Engine stopped"

# class Car:
#     def __init__(self):
#         self.engine = Engine()  
#     def start(self):
#         return self.engine.start()

#     def stop(self):
#         return self.engine.stop()
# engine = Engine()
# car = Car()

# print(car.start())     
# print(car.stop())      

