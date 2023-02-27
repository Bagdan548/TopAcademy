#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i*i <= n; i++)
        if (n%i == 0) return false;
    return true;
}

int * killPrimes(int * a, int& N)
{
    int j = 0;
    for(int i = 0; i < N; ++i)
    {
        if (!isPrime(a[i]))
            a[j++] = a[i];
    }
    int * b = new int[N = j];
    for(int i = 0; i < N; ++i)
    {
        b[i] = a[i];
    }
    return b;
}

int main()
{
    int N = 40;
    int a[40];
    for(int i = 0; i < N; ++i)
        cout << (a[i] = rand()%30) << " ";
    cout << endl;

    int * b = killPrimes(a,N);
    for(int i = 0; i < N; ++i)
        cout << b[i] << " ";
    cout << endl;

}