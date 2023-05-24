#include <iostream>
using namespace std;

int reverse_number(int number)
{
    int n = 0;
    while (number)
    {
        n = 10 * n + number % 10;
        number /= 10;
    }
 
    return n;
}
 
 
int main()
{
    cout << "Введите число: ";
    int number;
    cin >> number;
    if (number == reverse_number(number))
        cout << number << " True" << endl;
    else
        cout << " False " << endl;
    return 0;
}