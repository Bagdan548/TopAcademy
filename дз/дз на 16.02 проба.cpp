#include <iostream>
#include <ctime>
#include <cstdlib>
 
int main()
{
    srand(static_cast<unsigned>(time(NULL)));
    const int m=9;
    int n;
    int**a;
    std::cout<<"Enter n: ";
    std::cin>>n;
    a=new int*[n];
    for(int i=0; i<n; ++i)
       a[i]=new int[m];
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
             a[i][j] = rand() % 96 - 10;
        }
     }
     for(int i=0; i<n; ++i)
     {
         for(int j=0; j<m; ++j)
         {
             std::cout<<a[i][j]<<' ';
         }
         std::cout<<'\n';
     }
     for(int j=0; j<m; ++j)
     {
         int sum=0;
         for(int i=0; i<n; ++i)
         {
             sum+=a[i][j];
         }
         std::cout<<"Среднее арифметическое  "<< j+1 <<" столбца : "<< static_cast<double>(sum)/m<<'\n';
     }
     return 0;
}