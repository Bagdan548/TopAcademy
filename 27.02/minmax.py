
list1 = [3, 2, 8, 5, 10, 6]
max_number = max(list1)
print("Наибольшее число:", max_number)



list2 = [3, 2, 8, 5, 10, 6]
min_number = min(list1)
print("Наименьшее число:", min_number)

a = [3, -4, -1, 1, -2, 5, 4, 5, -5, -3, -4, 10, -10, -1, -2]
i1, i2 = 0, 0
for i in a:
    if i > 0:
        
        i1 += 1
    if i < 0:
        
        i2 += 1


print('Число положительных цифр:', i1 )
print('Число отрицательных цифр:', i2 )


