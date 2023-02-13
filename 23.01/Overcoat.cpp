#pragma once
#include <iostream>
using namespace std;
class Overcoat
{
    char* Fio;
    double price;
        public:
        Overcoat();
        Overcoat(const Overcoat&);
        void Print();
        Overcoat& operator ==(Overcoat);
        Overcoat& operator =(Overcoat);
        Overcoat& operator>(Overcoat);

       
 
 
Overcoat::Overcoat()
{
    Fio = 0;
 
}
 
Overcoat::Overcoat(const Overcoat& copy)
{
    Fio = (char*)malloc(strlen(copy.Fio) + 1);
    strcpy_s(Fio, strlen(copy.Fio) + 1, copy.Fio);
}
 
 
 
void Overcoat::Print()
{
    cout << "Fio: " << Fio <<  "\n";
}
 
 
 
 
Overcoat Overcoat::bool operator==(Overcoat)
 
{
    if (strcmp)
    {
        strcmp Fio1, obj.Fio2 = 0;
        return true;
    }
    else
    {
        return false;
    }
    
}
 
 
 
Overcoat& Overcoat::operator=(Overcoat)
{
    if (this != &copy)
    {
        if (Fio != Null)free(Fio);
        Fio - (char*)malloc(strlen(copy.Fio) + 1);
        strcpy_s(Fio, strlen(copy.Fio) + 1, copy.Fio);
    }
    return *this;
}
 
Overcoat Overcoat::operator>(Overcoat)
{
    if()
    
}


 
int main()
{
    
    setlocale(0, "rus");
    cout << " Проверка на равенство типов одежды : ";
    Overcoat Fio1(Palto);
    Overcoat Fio2(Palto);
    Overcoat res =Fio1==Fio2 ;
    res.Print();
 
}
int main()
{
    setlocale(0, "rus");
    cout << " Операцию присваивания одного объекта в другой : ";
    Overcoat Fio1(Palto);
    Overcoat Fio2(Palto);
    Overcoat res = Fio1 = Fio2;
    res.Print();
}
 
int main()
{
    setlocale(0, "rus");
    cout << "  Сравнение по цене двух пальто одного типа : ";
    Overcoat Fio1(Palto);
    Overcoat Fio2(Palto);
    Overcoat res = Fio1> Fio2;
    res.Print();
}
};