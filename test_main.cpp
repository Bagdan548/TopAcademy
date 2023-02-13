#include  <iostream>
#include <Overcoat.h>
 
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