x = int(input("Введите первое значение(a) : "))
print("Выберите: ")
print(" + ")
print(" - ")
print(" * ")
print(" / ")
a = input()
y = int(input("Введите второе значение(b): "))
if a == '+':
    print ("Ответ: ", x + y)
if a == '-':
    print ("Ответ: ", x - y)
if a == '*':
    print ("Ответ: ", x * y)
if a == '/':
    if y == 0:
        print ("Ошибка")
    else:
        print ("Ответ: ", x / y)