#class work 
#1

# a,b = map(int,input().split());
# print("sum:", a + b, " difference:", a - b, " product:", a * b);

#2
# |x| - |y|
# ---------
#  1 + |xy|

# x,y = map(int, input().split());
# print((abs(x) - abs(y)) / (1 + abs(x * y)));

#3
# Задана длина ребра куба. Найдите объем куба и площадь его боковой поверхности.

# a = int(input());
# print("volume:", a**3, " side area:", a*a);

#4
# Даны два действительных положительных числа. 
# Найдите среднее арифметическое и геометрическое значение этих чисел.

# a, b = map(int, input().split());
# print("mid arifmet:", (a + b)/2, " mid goemetric:", (a + b)**0.5);

#5
# их модулей.

# a, b = map(int, input().split());
# print("mid arifmet:", (abs(a + b))/2, " mid goemetric:", (abs(a + b))**0.5);

#variants
import math
#1

# x,y,z = map(int, input().split());
# print("a =",(abs(x-1)**0.5-abs(y)**(1/3))/(1+((x**2)/2)+((y**2)/4)));

# x, z = map(float,input().split());
# print("b =", x * (math.atan(z) + math.exp(-(x + 3))));

#2

# x,y,z = map(int, input().split());
# print("a =", (3 + math.exp(y - 1))/(1 + x**2 * abs(y - math.tan(z))));

# x,y = map(int, input().split())
# print("a =", 1+abs(y-x) + ((y-x)**2)/2 + (abs(y-x)**3)/3)

#3

# x,y = map(int, input().split())
# print("a =", (1+y)*((x+y/((x**2)+4))/(math.exp(-x-2)+1/(x**2+4))))

# x,y,z = map(int,input().split())
# print("b =",(1+math.cos(y-2)/((x**4/2) + math.sin(z)**2)))

#4

# x,y = map(int, input().split())
# print("a =", y + x / (y**2/(y+(x**3)/3)))

# z = int(input())
# print("b =", 1 + math.tan(z/2)**2)

#5

# x,y = map(int, input().split())
# print("a =", (2*math.cos(x - math.pi/6))/(1/2+math.sin(y)**2))

# z = int(input())
# print("b =", 1 + z**2/(3+z**2/5))

#6

# x,y,z = map(int, input().split())
# print("a =", ((1+math.sin(x+y)**2)/(2+abs(x-2*x*(1+x**2*y**2))))+x)

# z = int(input())
# print("b =", math.cos(math.atan(1/z)**2))

#7

# x,y,z = map(int, input().split())
# print("a =", math.log(abs((y-abs(x)**0.5)*(x-y/(z - x**4/4)))))

# x = int(input())
# print("b =", x - x**2/math.factorial(3) + x**5/math.factorial(5))

#8

# a = int(input())
# print("S =", ((math.sqrt(3))/4)*a**2)

#9

# T + 2 * pi * (l/g)**0.5

# l,g = map(int, input().split())
# print("T =", 2*math.pi*math.sqrt(l/g))

#10

# r,m1,m2 = map(float, input().split())
# print("F =", ((6.67 * 10**(-11))*m1*m2)/r**2)

#11
kat, gep = map(int,input().split())
print()