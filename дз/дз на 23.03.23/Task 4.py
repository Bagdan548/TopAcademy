x = int(input())

s = 0

mx,mn = x, x

while x != 7:
   s+=x
   if x > mx:
       mx = x
   if x < mn:
       mn = x
   x = int(input())

print("Сумма равна:",s)

print("Максимум:",mx)

print("Минимум:",mn)

