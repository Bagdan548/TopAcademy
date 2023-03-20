a=int(input())
b=int(input())
summ=0
summch=0
summ7=0
for i in range(a,b+1):
    if i%2!=0:
        summ+=i
    if i%2==0:
        summch+=i
    if i%7==0:
        summ7+=i
print("Сумма нечетных: ",summ)
print("Сумма четных: ",summch)
print("Сумма кратных на 7: ",summ7)