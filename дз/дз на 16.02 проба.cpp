#include <iostream>
using namespace std;
const int n = 3, m = 3;
 
int main() 
{
    setlocale(0, "RUS");
    int arr[n][m];
    double res[n] = { 0 };
 
    cout << "Задайте двумерный массив размером " << n << "X" << m <<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            res[i] += arr[i][j];
        }
        res[i] /= n;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "Cреднее арифметическое " << i << " строки: ";
        cout << res[i] << " "<<endl;
    }
 
    cout << endl;
    
    cout << "Одномерный массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
 
    cout << endl;
    system("pause");
    return 0;
}