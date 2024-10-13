n = int(input())
res = math.sqrt(3)
for i in range(2, n+1):
    res = math.sqrt(3 * i + res)
print("n:", n, "res:",res)