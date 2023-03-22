n = int(input())
if n > 1 and n < 100:
    if ((n % 3 == 0) and (n % 5 == 0)):
        print("Fizz Buzz")
    elif n % 3 == 0:
        print("Fizz")
    elif n % 5 == 0:
        print("Buzz")
else:
    print("Ошибка, введите с клавиатуры число в диапазоне от 1 до 100")