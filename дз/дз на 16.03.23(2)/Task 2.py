number = int(input("Введите число: "))
for i in range(8):
    print("{0}^{1} = {2}".format(number, i, number**i))
