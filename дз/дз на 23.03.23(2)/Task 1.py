while True:
    num1 = input()
    num2 = input()
    if num1.isdigit() and num2.isdigit():
        print(int(num1) * int(num2))
        break