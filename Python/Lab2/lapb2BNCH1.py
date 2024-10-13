# Lab2 bnch1 
# class work 


#1
#Three real numbers are given. Choose from them those that belong to the interval (1,3). 

# n1, n2, n3 = map(int, input().split())
# nums = [n1, n2, n3]
# for i in nums:
#     if i >= 1 and i <= 3:
#         print(i)



#2 
#Given real numbers x, y (not equal). Replace the smaller of these two numbers with their half sum, and the larger with their double product. 

# x,y = map(int,input().split())
# if x != y:
#     maxnum = max(x,y)
#     minnum = min(x,y)
#     print(" x =", (maxnum + minnum)/ 2, "\n", "y =", 2 * maxnum * minnum)



#3
#Three real numbers are given. Square those of them whose values are non-negative. 

# n1, n2, n3 = map(int, input().split())
# nums = [n1,n2,n3]
# for i in nums:
#     if i > 0:
#         print(i**2)
#     else:
#         print(i)



#4
#If the sum of three pairwise distinct numbers x , y , z is less than one, 
# then replace the smallest of these three numbers with a half-sum of the other two; otherwise, replace the smaller of x and y with half the sum of the two remaining values. 

# x,y,z = map(int,input().split())
# summa = x+y+z
# if summa < 1:
#     print((summa - min(x,y,z))/2)
# else:
#     print((summa - min(x,y))/2)



# variants 

#1
# a,b,c,d = map(int,input().split())
# nums = [a,b,c,d]
# for i in nums:
#     if a <= b and b <= c and c <= d:
#         print(max(a,b,c,d))
#     elif a > b and b > c and c > d:
#         print(i)
#     else:
#         print(i**2)



#2
# x,y = map(float,input().split())
# if x < 0 and y < 0:
#     print(abs(x),abs(y))
# elif x > 0 and y > 0:
#     if (0.5 <= x <= 2.0) and (0.5 <= y <= 2.0):
#         print(x/10,y/10)
#     else:
#         print(x,y)
# else:
#     print(x+0.5,y+0.5)



#3
# a,b,c = map(int,input().split())
# if (a + b > c and a + c > b and b + c > a) and (a**2 + b**2 > c**2 and a**2 + c**2 > b**2 and b**2 + c**2 > a**2):
#     print(True)
# else:
#     print(False)



#4
# a,b,c = map(int,input().split())
# D = b**2 - 4*a*c
# if D > 0:
#     print(" x1:", (-b + D**0.5) / (2 * a), 
#           "\n","y2:", (-b - D**0.5) / (2 * a))
# elif D == 0:
#     print("x:", -b/(2*a))
# else:
#     print(False)




#5
# import math
# a,b,c,h = map(float,input().split())
# a1 = math.sqrt((abs(math.sin(8 * h)+17)/(1-math.sin(4*h)+math.cos(h**2+18)**2)))
# b1 = 1 - math.sqrt(3/(3+abs(math.tan(a1*h**2)-math.sin(a1*h))))
# c = a1*h**2*math.sin(b1*h) + b1*(h**3)*math.cos(a1*h)

# D = b1**2 - 4*a1*c
# if D >= 0:
#     print(" x1:", (-b1 + D**0.5) / (2 * a1), 
#           "\n","y2:", (-b1 - D**0.5) / (2 * a1))
# elif D == 0:
#     print("x:", -b1/(2*a1))
# else:
#     print(False)
    


#6
# a1, b1, c1, a2, b2, c2 = map(float, input().split())
# chek = a1*b2 - a2*b1
# x = c1*b2 - c2*b1
# y = a1*c2 - a2*c1

# if abs(chek) >= 0.0001:
#     x1 = x/chek
#     y1 = y/chek
#     print("(x,y):",x,y)
# else:
#     print(False)

#7
a,b,c = map(float,input().split())
D = b**2 - 4*a*c
if D >= 0:
    t1 = (-b + (D**0.5)) / (2*a)
    t2 = (-b - (D**0.5)) / (2*a)