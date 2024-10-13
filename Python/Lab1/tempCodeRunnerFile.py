import math
kat1, kat2 = map(int, input().split())
print("hyp =", math.sqrt(kat1**2 + kat2**2),
                         "\n","square =", (1/2) * kat1 * kat2)
