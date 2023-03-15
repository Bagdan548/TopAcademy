meters = int(input())

choice = int(input('''

1 - мили

2 - дюймы

3 - ярды

''')) - 1

actions = [lambda m: m * 0.000621371, lambda m: m * 39.37, lambda m: m * 1.094]

print(actions[choice](meters))