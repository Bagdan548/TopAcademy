s = input()
print("Количество букв:", sum(map(str.isalpha, s)))
print("Количество цифр:", sum(map(str.isdigit, s)))