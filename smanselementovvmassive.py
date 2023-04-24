arr = list(map(int, input('Введите целые чисел через пробел: ').split()))
print(arr)  

k = -1

for i in range(len(arr)//2):
    print("\n неизменённый массив - ",i , arr)
    arr[k], arr[i] = arr[i], arr[k]
    print("изменённый массив    ", arr)
    k -= 1