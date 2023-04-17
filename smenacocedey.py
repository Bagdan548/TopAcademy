# Считываем размеры массива
     s=raw_input()
     s=s.split()
     n=int(s[0])
     m=int(s[1])
     
     # Создаем массив
     A=range(n)
     for i in range(n):
         A[i]=range(m)
     
     # Считываем массив с клавиатуры
     for i in range(n):
         s=raw_input()
         s=s.split()
         for j in range(m):
             A[i][j]=int(s[j])
     
     # Увеличиваем все элементы на 1
     for i in range(n):
         for j in range(m):
             A[i][j]=A[i][j]+1
     
     # Выводим массив на экран
     for i in range(n):
         for j in range(m):
             print A[i][j],
         print