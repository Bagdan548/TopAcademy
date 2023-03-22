a=int(input())
b=int(input())
summ=0
summch=0
summ9=0
for i in range(a,b+1):
    if i%2!=0:
        summ+=i
        print("Сумма нечетных: ",summ)
    if i%2==0:
        summch+=i
        print("Сумма четных: ",summch)
    if i%9==0:
        summ9+=i
        print("Сумма кратных на 9: ",summ9)