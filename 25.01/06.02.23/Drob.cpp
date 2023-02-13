#include <iostream>
using namespace std;
int main(void){
    int n, m; cin>>n>>m;
    int **mas=new int*[n];
    for(int i=0;i<n;i++)
        mas[i]=new int[m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mas[i][j];
    for(int i=0;i<n;i++)
        delete []mas[i];
    delete []mas; cout<<endl;}