#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
const int n = 15;
 
void mas(int *q, int n)
{
    int x = 0, y = 0, z = 0;
    int *a = new int[];
    int *b = new int[];
    int *c = new int[];
    for (int i = 0; i < n; i++)
    {
        if (*(q+i)>0)
        {           
            *(a + x) = *(q + i);
            x++;
        }
        if (*(q + i)<0)
        {
            *(b + y) = *(q + i);
            y++;
        }
        if (*(q + i)==0)
        {
            *(c + z) = *(q + i);
            z++;
        }
    }
    
    if (x > 0){
        for (int i = 0; i < x; i++)
            cout << *(a + i) << " ";
        cout << endl;
    }
    
    if (y > 0){
        for (int i = 0; i < y; i++)
            cout << *(b + i) << " ";
        cout << endl;
    }
    
    if (z > 0){
        for (int i = 0; i < z; i++)
            cout << *(c + i) << " ";
        cout << endl;
    }
    delete[] c;
    delete[] b;
    delete[] a;
}
 
void main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
        
    int A[n];
    
  
    for (int i = 0; i < n; i++)
        A[i] = rand() % 41 - 20;
    cout << "Наш массив:\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    int *q = A;
    mas(q, n);
} 