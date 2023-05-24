#include <iostream>


int numlen(int n)
{
    int len = 1;
    while(n/10 !=0)
    {
        ++len;
        n /=10;

    }
    return len;
}

char *itos(int n)
{
    char *str = new char[numlen(n) + 1];
    str[numlen(n) ] = '\0';
    
   int tmp =n;
   while (tmp !=0)
   {
    str[i] = tmp % 10 + '0';

    tmp /=10;
    i++;


   }

    return str;

}

int main(int argc, char const *argv[])
{
    int n = 26;

    std::cout << itos(n)<< "\n";

    return 0;
}