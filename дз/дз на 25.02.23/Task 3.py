numbers = [int(i) for i in input().split(' ')]
for number in numbers:
    for divider in range(1, 11):
            print(f'{number}*{divider}={number * divider} ')
print('========')