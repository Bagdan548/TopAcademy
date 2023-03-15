a,b,c=int(input('a? ')),int(input('b? ')),int(input('c? '))
choise=int(input('1 - Максимум или 2 - Минимум 3 - Ср. арифм. '))
print (max(a,b,c) if choise==1 else min(a,b,c) if choise==2 else sum([a,b,c])/3)