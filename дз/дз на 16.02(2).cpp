#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int m, n;

    m = 3 + (rand() % 4);
    n = 4 + (rand() % 4);
    float ** arr = new float*[m]; // создание динамического двумерного массива на m строк
    for (int i(0); i < m; i++) // создание каждого одномерного массива в динамическом двумерном массиве, или иначе - создание столбцов размерность n
        arr[i] = new float[n];


    //заполнение массива от -85 до 85
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 96 - 10;
        }
    }
    //вывод чисел
    cout << "Массив: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i(0); i < m; i++) // освобождение памяти каждого одномерного массива в двумерном массиве - удаление столбцов
        delete arr[i];
    delete arr; // освобождение памяти двумерного массива

    return 0;
}