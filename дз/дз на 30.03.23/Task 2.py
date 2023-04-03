import random
res = [random.randrange(-10, 10) for i in range(10)]
print ("Список чисел: " +  str(res))
a = max(res)
print("Максим.знач: ", a)
b = min(res)
print("Миним.знач: ", b)
i = 0
print('Кол-во положительных чисел:', sum(i > 0 for i in res))
print('Кол-во отрицательных чисел:', sum(i < 0 for i in res))
print('Кол-во нулей чисел:', sum(i == 0 for i in res))
print ("Произведение максимального и минимального:", a * b)