diapazon = int(input("Введите число, до которого хотите провести поиск простых чисел: "))
for num in range(1,diapazon):
        count = 0
        delitel = 2
        while delitel<num:
            if num%delitel == 0:
                count += 1
            delitel += 1
        if count == 0:
            print (f'{num}  - простое число')
            