#include<iostream>
using namespace std;
class String
{
private:
char *s;
int n;
//конструктор без параметров
String():s(0),n(0){}
//конструктор принимает строку текста
String(char *str)
{n= strlen(str);
s=new char[n];
for (int i=0; i<n; i++) s[i]=str[i];
}

String (String& T)
{n=T.n;
s=new char [n];
for (int i=0;i<n;i++)
s[i]=T.s[i];
}
//Деструктор
virtual ~String() 
{if(s)delete[]s;
}
};