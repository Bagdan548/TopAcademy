#include <iostream>
 class Calc
int main(){
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Введите первую переменную (a): ";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     ки о
    std::cin >> a;
    std::cout << "Введите вторую переменную (b): ";
    std::cin >> b;        
    std::cout << "Введите операцию (+ - / *) : ";
    std::cin >> operation;
 
    switch (operation){
    case '-':
        std::cout << "a - b = " << a - b <<'\n';
        break;
    case '+':                                                                  
        std::cout << "a + b = " << a + b << '\n';
        break;
    case '*':
        std::cout << "a * b = " << a * b << '\n';
        break;
    case '/':
        std::cout << "a / b = " << a / b << '\n';
        break;
    default:
        std::cout << "Error\n";
    }
    return 0;
}