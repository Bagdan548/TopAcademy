a = int(input('Введите продажи 1 менеджера: '))
b = int(input('Введите продажи 2 менеджера: '))
c = int(input('Введите продажи 3 менеджера: '))
oklad = 200
if a>1000:
    zp1 = oklad+a*0.08
else:
    if a <500:
        zp1 = oklad+a*0.03
    else:
        zp1 = oklad+a*0.05
    if b>1000:
        zp2 = oklad+b*0.08
    else:
        if b <500:
            zp2 = oklad+b*0.03
        else:
            zp2 = oklad+b*0.05
        if c>1000:
            zp3 = oklad+c*0.08
        else:
            if c <500:
                zp3 = oklad+c*0.03
            else:
                zp3 = oklad+c*0.05
            if zp1 > zp2 and zp1 > zp3:
                print('Лучший по продажам - 1 менеджер!')
                zp1 += 200
            if zp2 > zp1 and zp2 > zp3:
                print('Лучший по продажам - 2 менеджер!')
                zp2 += 200
            if zp3 > zp1 and zp3 > zp2:
                print('Лучший по продажам - 3 менеджер!')
                zp3 +=200
print('Зарплата 1 менеджера ',zp1)
print('Зарплата 2 менеджера ',zp2)
print('Зарплата 3 менеджера ',zp3)