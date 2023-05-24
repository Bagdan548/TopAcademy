
my_dict, w = {}, {}
sl = input()
for i in sl:
    w[i] = w.get(i, 0) + 1
for _ in range(int(input())):
    a, b = input().split(': ')
    my_dict[int(b)] = a
for i in sl:
    print(my_dict[w[i]], end='')