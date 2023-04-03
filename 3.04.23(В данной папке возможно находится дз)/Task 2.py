from random import randint
N = int(input())
mas = [int(randint(0, 104)) for i in range(N)]
ch = [int(i) for i in mas if i % 2 == 0]
nch = [int(i) for i in mas if i % 2 != 0]
tolkootr = [int(i) for i in mas if i  < 0]
tolkopolozhit = [int(i) for i in mas if i  > 0] 
print(mas)
print(ch)
print(nch)
print(tolkootr)
print(tolkopolozhit)