from random import randint 
A = [randint(-9, 9) for i in range(int(input('n: ')))] 
print(*A) 
p, z, n, mini, maxi = 0, 0, 0, 100, -100 
for a in A: 
    if a < 0: n += 1 
    elif a ==0: z += 1 
    else: p += 1 
    if a > maxi: maxi = a 
    if a < mini: mini = a 
print("min i =", mini, ", maxi =", maxi) 
print("positives:", p, ", zeroes:", z, ", negatives: ", n) 
input()