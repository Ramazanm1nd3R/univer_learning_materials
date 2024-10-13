# class work

#bnch 1

#1
n1, n2, n3 = map(int, input().split())
nums = [n1, n2, n3]
for i in nums:
    if i >= 1 and i <= 3:
        print(i)

#2
x,y = map(int,input().split())
x1 = max(x,y)
y1 = min(x,y)
if x != y:
    if x > y:
        print(" x =", (x1+y1)/2,"\n","y =",2*x1*y1)
    elif x < y:
        print(" x =",2*x1*y1, "\n", "y =",(x1+y1)/2)


#3
n1, n2, n3 = map(int, input().split())
nums = [n1,n2,n3]
for i in nums:
    if i > 0:
        print(i**2)
    else:
        print(i)

#4
x,y,z = map(int,input().split())
summa = x+y+z
if summa < 1:
    print((summa - min(x,y,z))/2)
else:
    print((summa - min(x,y))/2)







#bnch 2
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










# banch 1
# variant
#1
a,b,c,d = map(int,input().split())
nums = [a,b,c,d]
for i in nums:
    if a <= b and b <= c and c <= d:
        print(max(a,b,c,d))
    elif a > b and b > c and c > d:
        print(i)
    else:
        print(i**2)


#3
a,b,c = map(int,input().split())
if (a + b > c and a + c > b and b + c > a) and (a**2 + b**2 > c**2 and a**2 + c**2 > b**2 and b**2 + c**2 > a**2):
    print(True)
else:
    print(False)



#5
import math
a,b,c,h = map(float,input().split())
a1 = math.sqrt((abs(math.sin(8 * h)+17)/(1-math.sin(4*h)+math.cos(h**2+18)**2)))
b1 = 1 - math.sqrt(3/(3+abs(math.tan(a1*h**2)-math.sin(a1*h))))
c = a1*h**2*math.sin(b1*h) + b1*(h**3)*math.cos(a1*h)

D = b1**2 - 4*a1*c
if D >= 0:
    print(" x1:", (-b1 + D**0.5) / (2 * a1), 
          "\n","y2:", (-b1 - D**0.5) / (2 * a1))
elif D == 0:
    print("x:", -b1/(2*a1))
else:
    print(False)



#7
import math
a,b,c = map(float,input().split())
if a == 0:
    print("incorrect input")
else:
    D = b**2 - 4*a*c
    if  D >= 0:
        x1 = math.sqrt((-b + D**0.5) / (2 * a))
        x2 = -math.sqrt((-b + D**0.5) / (2 * a))
        x3 = math.sqrt((-b - D**0.5) / (2 * a))
        x4 = -math.sqrt((-b - D**0.5) / (2 * a))
        print("x1 =", x1, "x2 =", x2, "x3 =", x3, "x4 =", x4)
    else:
        print("error")


#9 
a,b,c,d,e,f,g,h = map(int,input().split())
x1 = (b - f) * (g - e) - (h - f) * (a - e)
x2 = (d - f) * (g - e) - (h - f) * (c - e)
if (x1 * x2 > 0):
    print("on one plane")


#11
a,b,c,d = map(int,input().split())
if c > a and d > b:
    print("посместиться")
else:
    print("не поместиться")


#13
a = int(input())
if -2 <= a < 2:
    print(a**2)
else:
    print(4)


#15
a = int(input())
if a <= 0:
    print(0)
elif 0 < a <= 1:
    print(a)
else:
    print(a**4)


#17
    
a,x,y = map(float,input().split())
if x < 0 and y > 0:
    print("y:", a * -1)
elif x > 0 and y < 0:
    print("y:",a**2 * -1)

if x < -1 and -1 > y > 0:
    print("y:", -(1/a**2))
elif 2 > x > -1 and y > 0:
    print("y:",a**2)
elif y > 0 and x > 2:
    print("y: 4") 


#19
import math

x,y = map(float,input().split())
is_inside_outer_circle = math.sqrt(x**2 + y**2) <= 1
is_inside_inner_circle = math.sqrt(x**2 + y**2) <= 0.5

is_inside_square = -1 <= x <= 1 and -1 <= y <= 1

if is_inside_outer_circle and not is_inside_inner_circle:
    print("Точка находится в пространстве между внешним и внутренним кругами")
else:
    print("Точка не находится в пространстве между внешним и внутренним кругами")

if is_inside_square:
    print("Точка находится внутри квадрата")
else:
    print("Точка не находится внутри квадрата")

#bnch 2

#1
n = int(input())
sm = 1
n1 = 0
while n1 < n:
    n1 += 1
    sm *= (1 + 1/n1 ** 2)
print(sm)


#3
import math
n = int(input())
sm = math.sqrt(2)
for i in range(n-1):
    sm = math.sqrt(2 + sm)
print(sm)


#5
import math
n = int(input())
res = math.sqrt(3)
for i in range(2, n+1):
    res = math.sqrt(3 * i + res)
print("n:", n, "res:",res)


#7
import math
a,n = map(int,input().split())
res = 1
for i in range(n):
    res += (a + i)
print(f"a: {a} n:{n} res:{res}")


#9
a,n = map(int,input().split())
res = 1
for i in range(n + 1):
    res *= (a - i * n)
print(f"a:{a} n:{n} res:{res}")


#11
x = int(input())
res = 1
ch = 3
for i in range(1,7):
    if i % 2 != 0:
        if ch == 3:
            o = 1
            for i in range(1, ch + 1):
                o *= i
            res -= x**3/o 
            ch += 2
        else:
            o = 1
            for i in range(1, ch + 1):
                o *= i
            res -= x**3/o
            ch += 2
    elif i % 2 == 0:
        o = 1
        for i in range(1,ch + 1):
            o *= i
            res += x**ch/0
            ch += 2
print(res)


#13
x = int(input())
res_1,res_2 = 1
for i in range(2,64+1,2):
    res_1 *= (x - i)
for i in range(1,63+1,2):
    res_2 *= (x - i)
print(res_1/res_2)


#15
import math
x,n = map(int,input().split())
start = math.sin(x)
for i in range(2,n + 1,2):
    start += math.sin(x**n)
print(start)


#17 
a_0 = 1

n = int(input())
for k in range(n):
    if k == 0:
        a_k = 1
    else:
        a_k = k * a_k
    print(f'a_{k} = {a_k}')



#19
q,r,b,c,d = map(float,input().split())
n = int(input())
x_0 = c
x_1 = d
for i in range(2,n+1):
    x_r = q*x_1+r*x_0+b
    x_0,x_1 = x_1,x_r
print(x_1)

