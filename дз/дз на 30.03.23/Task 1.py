s = input()
if '+' in s:
    a, b = s.split('+')
    print(int(a) + int(b))
if '-' in s:
    a, b = s.split('-')
    print(int(a) - int(b))
if '*' in s:
    a, b = s.split('*')
    print(int(a) * int(b))
if '/' in s:
    a, b = s.split('/')
    print(int(a) / int(b))