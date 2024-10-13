# class work

#1

a,b = map(int,input().split())
print("sum:", a + b, " difference:", a - b, " product:", a * b)

#2

x,y = map(int, input().split())
print((abs(x) - abs(y)) / (1 + abs(x * y)))

#3

a = int(input())
print("volume:", a**3, " side area:", a*a)

#4

a, b = map(int, input().split())
print("mid arifmet:", (a + b)/2, " mid goemetric:", (a + b)**0.5)

#5
# их модулей.

a, b = map(int, input().split())
print("mid arifmet:", (abs(a + b))/2, " mid goemetric:", (abs(a + b))**0.5)







# variants 
import math
#1

x,y,z = map(int, input().split())
print("a =",(abs(x-1)**0.5-abs(y)**(1/3))/(1+((x**2)/2)+((y**2)/4)))

x, z = map(float,input().split())
print("b =", x * (math.atan(z) + math.exp(-x + 3)))

#3

x,y = map(int, input().split())
print("a =", (1+y)*((x+y/((x**2)+4))/(math.exp(-x-2)+1/(x**2+4))))

x,y,z = map(int,input().split())
print("b =",(1+math.cos(y-2)/((x**4/2) + math.sin(z)**2)))

#5

x,y = map(int, input().split())
print("a =", (2*math.cos(x - math.pi/6))/(1/2+math.sin(y)**2))

z = int(input())
print("b =", 1 + z**2/(3+z**2/5))

#7

x,y,z = map(int, input().split())
print("a =", math.log(abs((y-abs(x)**0.5)*(x-y/(z - x**4/4)))))

x = int(input())
print("b =", x - x**2/math.factorial(3) + x**5/math.factorial(5))

#9

# T + 2 * pi * (l/g)**0.5
# l длина маятница, g - скорость падения

l,g = map(int, input().split())
print("T =", 2*math.pi*math.sqrt(l/g))

#11

kat, hyp = map(int, input().split())
print("second katet -", math.sqrt(hyp**2 - kat**2,
                                  "\n","redius -", hyp/2,
                                  "\n","square of cyrcle-", math.pi*(hyp/2)**2))

#13
#Sn = n/2 * (a1 + an)

a1,an,n = map(int, input().split())
print("Find the sum of the members of an arithmetic progression", (n/2)*(a1+an))

#15 
kat1, kat2 = map(int, input().split())
print("hyp =", math.sqrt(kat1**2 + kat2**2),
                         "\n","square =", (1/2) * kat1 * kat2)

#17 
n, r = map(int, input().split())
print("square of right", n, "-sides =",2*n*r*math.sin(math.pi/n))