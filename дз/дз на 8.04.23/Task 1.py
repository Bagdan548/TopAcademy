x=int(input ("Введите 1 границу диапазона: ")) 
y=int(input ("Введите 2 границу диапазона: ")) 
n=int(input ("Введите число: ")) 
 
while n<x or n>y:
    print ("Число не в диапазоне!!!!")
    n=int(input ("Введите число: ")) 
 
for i in range(x, y+1):
    num = i
    if i == n:
        num = '!' + str(i) + '!'
    if i == y:
        print(num)
    else:
        print(num, end=' ')