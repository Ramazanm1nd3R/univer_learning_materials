#1
import math

def f(a,b,c):
    return (2*a-b-math.sin(c))/(5+abs(c))

s,t = map(int,input().split())
print(f(t+2.2,2*s+t,1.17+(s-t)))

#2
def g(a,b):
    return (a**2+b**2)/(a**2+2*a*b+3*b**2+4)
s,t = map(int,input().split())
print(g(1.2+t-(2*s-1),s + s - s*t))


#3
def t(x):
    def fact(n):
        res = 1
        for i in range(1,n+1):
            res *= i
        return res
    
    sum1,sum2 = 0,0
    for k in range(1,10+1):
        sum1 += (x**(2*k+1))/fact(2*k+1)
    for k in range(1,10+1):
        sum2 += (x**(2*k))/fact(2*k)

    return sum1/sum2

y = int(input())
print((1.7*t(0.25) + 2*t(1+y))/(6-t(y**2-1)))


#4
def f(a,b,c):
    return (max(a,a+b) + max(a,b+c)) / (1 + max(a+b*c,1,15))

a,b,c = map(int,input().split())
print(f(a,b,c))


#5
def u(a,b):
    return min(a,b)
def v(a,b):
    return min(a*b,a+b)
a,b = map(int,input().split())
resu = u(a,b)
resv = v(a,b)
print(min(resu + resv**2,3.14))


#6
def func(lista,listb,listc):
    if min(lista) > 10:
        l = min(listb) + min(listc)
    else:
        l = 1 + (max(listc))**2
    return l

n,m = map(int,input().split())
lista,listb = [],[]
for i in range(n):
    print(f"enter the {i+1}th el on listA...")
    el = int(input())
    lista.append(el)
for i in range(m):
    print(f"enter the {i+1}th el on listB...")
    el = int(input())
    listb.append(el)
listc = [3,7,2,3,12,32,15,17]
print(func(lista,listb,listc))


#7
def task7(list_A, list_B, n, x, y):
    res = 0
    for n1 in range(n):
        res += (list_A[n1] + 1j * list_B[n1]) * (x + y * 1j) ** n1
    return res

n, x, y = map(int, input().split())
listA, listB = [], []
for i in range(n):
    print(f"Enter the {i+1}-th element for list A...")
    el = int(input())
    listA.append(el)
for i in range(n):
    print(f"Enter the {i+1}-th element for list B...")
    el = int(input())
    listB.append(el)

print(task7(listA, listB, n, x, y))



#8
def complexs(u1, u2, v1, v2, w1, w2):
    u = complex(u1, u2)
    v = complex(v1, v2)
    w = complex(w1, w2)
    result = 2*u + ((2*u*w)/(2+w+v)) - 7
    return result

u1, u2, v1, v2, w1, w2 = map(int,input().split())
print(complexs(u1, u2, v1, v2, w1, w2))
    # u = u1j + u2j
    # v = v1j + v2j
    # w = w1j + w2j




#9
import math

def task9(listlist):
    listFullSquares = []
    listPowerOfFive = []
    listPrimeNumbers = []

    for el in listlist:
        powfive = 1
        res = 5
        while res < el:
            powfive += 1
            res *= 5
        if el == 1 or res == el: 
            listPowerOfFive.append(el)

        
        if math.isqrt(el)**2 == el and not (el == 1 or res == el):
            listFullSquares.append(el)

        # powfive = 1
        # res = 5
        # while res < el:
        #     powfive += 1
        #     res *= 5
        # if el == 1 or res == el: 
        #     listPowerOfFive.append(el)

        primarycheck = 0    
        for i in range(1, el + 1):
            if el % i == 0:
                primarycheck += 1
        if primarycheck == 2:
            listPrimeNumbers.append(el)
    
    if len(listFullSquares) > len(listPowerOfFive) and len(listFullSquares) > len(listPrimeNumbers):
        return "квадратных чисел больше"
    elif len(listPowerOfFive) > len(listFullSquares) and len(listPowerOfFive) > len(listPrimeNumbers):
        return "чисел степеней 5ти больше" 
    else:
        return "простых числе больше"
    

n = int(input("enter the length of list: "))
listtask9 = []
for i in range(n):
    el = int(input(f"enter {i+1}-th element: "))
    listtask9.append(el)

print(task9(listtask9))




#10
def task10(n):
    res = []
    for i in range(0, n+1):
        for j in range(i, n+1):
            if i**2 + j**2 <= n:
                res.append(i**2 + j**2)
    return sorted(res)
n = int(input())
print(task10(n))


#11
def task11(n):
    sovershenni = []
    for i in range(1,n):
        sumdel = 0
        for k in range(1,i):
            if i % k == 0:
                sumdel += k
        if i == sumdel:
            sovershenni.append(i)
    return sovershenni

n = int(input())
print(f"sovershennie {task11(n)}")



#12
def task12():
    sum = 0
    for i in range(1,100+1):
        for j in range(1,50+1):
            sum += 1/(i+j**2)
    return sum
    
print(task12())            
    

#13
import math
def task13():
    sum = 0
    for i in range(1,100+1):
        for j in range(1,60+1):
            sum += math.sin(i**3+j**4)
    return sum
print(task13())


#14
def task14():
    sum = 0
    for i in range(1,100+1):
        for j in range(1,100+1):
            sum += (j-i+1)/(i+j)
    return sum
print(task14())


#15
def task15():
    sum = 0
    for i in range(1,100 + 1):
        for j in range(1,i+1):
            sum += 1/(2*j + i)
    return sum
print(task15())


#16
def task16(n):
    sum = 0
    for k in range(1,n+1):
        sum += k*(k+1)
    return sum
n = int(input())
print(task16(n))


#17
def task17(n):
    def fact(x):
        res = 1
        for i in range(1,x+1):
            res *= i
        return res
    
    sum = 0
    for k in range(1,n+1):
        sum = 1/(fact(k**2))
n = int(input())
print(task17(n))


#18
def task18(n):
    def fact(x):
        res = 1
        for i in range(1,x+1):
            res *= i
        return res
    sum = 0
    for k in range(1,n+1):
        sum += ((-1)**k) * fact(2*k**2+1)
    return sum
n = int(input())
print(task18(n))


#19
def task19(n,x):
    def fact(x):
        res = 1
        for i in range(1,x+1):
            res *= i
        return res
    sum = 0
    for i in range(1,n+1):
        sum += (fact(2*i) + abs(x))/fact(i**2)
    return sum

n,x = map(int,input().split())
print(task19(n,x))


#20
def task20(n,x):
    def fact(x):
        res = 0
        for i in range(1,n+1):
            res *= i
        return res
    sum = 0
    for k in range(1,n+1):
        sum += ((-1)**k)*((x**k)/fact(fact(k)+1))
    return (1/fact(n))*sum
n,x = map(int,input().split())
print(task20(n,x))


#21
def task21(n,x):
    sum = 0
    for k in range(1,n+1):
        for m in range(k,n+1):
            sum += (x+k)/m
    return sum
n,x = map(int,input().split())
print(task21(n,x))


#22
def task22(n,x):
    def fact(x):
        res = 1
        for i in range(1,x+1):
            res *= i
        return res
    
    sum = 0
    for i in range(1,n+1):
        sum += (fact(2*i)+abs(x))/fact(i**2)
    return sum
n,x = map(int,input().split())
print(task22(n,x))


#23
# def h(a,b):
#     return (a/(a+b**2)) + (b/(1+a**2)) - (a-b)**3

# s,t = map(int,input().split())



# def compute_expression(s, t):
#     term1 = h(s, t)
#     term2 = max(h(s - t, st)**2, h(s - t, s + t)**2)
#     term3 = h(1, 1)
#     return term1 + term2 + term3
def calc_h(a, b):
    h=a/((1-b**2)+(b/(1+a**2))-((a-b)**3))
    return h

s= int(input())
t= int(input())
result= calc_h(s, t) + max(((calc_h(s-t, s*t))**2), pow((calc_h(s-t, s+t)), 4)) + calc_h(1, 1)

print(result)







