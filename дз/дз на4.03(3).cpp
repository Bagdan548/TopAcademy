#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
 
using namespace std;
 
int main()
{
ifstream fin("input.txt");
ofstream fout("output.txt");
int k, t, d, p = 0;
struct point
{
string x;
} res[450000]; 
while(!fin.eof()) 
{
string a, b;
getline(fin, a);
a = a + ' ';
for (int i = 0; i < a.length(); i++)
{
if (((a[i] == '-') || (isalpha(a[i]))) && (a[i] != ' ')) b += a[i]; 
if (a[i] == ' ') 
{
if ((b != "") && (b[0] != '-') && (b[b.length() - 1] != '-'))
{
res[p].x = b;
p++;
}
b = "";
}
}
}
for (int i = 0; i < p; i++) 
{                          
for (int j = p - 1; j > i; j--) 
{                               
if (res[j].x <= res[j-1].x)    
{
swap(res[j-1].x, res[j].x); 
}
}
}
fout << "PROCESSED WORDS:" << endl << endl;
k = 0;
t = 0;
d = 0;
for (int i = t; i < p; i++)
{
if (res[i].x == res[i+1].x) 
{
k++;
}
else 
{
t = k;
k = 0;
if (t >= 0) 
{
fout << res[i].x << ": " << t + 1 << endl; 
d++;
}
}
}
fout << endl;
fout << "QUANTITY OF WORDS: " << d << endl; 
fin.close();
fout.close();
system("pause"); 
return 0;   
}