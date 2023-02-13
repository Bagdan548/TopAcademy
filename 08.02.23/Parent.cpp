#include <string>
#include <iostream>



class Parent{
    private:
    std::string name;

public:
Parent(): Parent("Parent") {}
Parent (const Parent &other):Parent(other.name){}
Parent (const std::string &name){
    this->name = name;
    std::cout << "Hi! My name" << name <<"\n";
void sayName() {
    std::cout << "My name" << name << "\n";
}
}
Parent(){
    std::cout << name <<"is gone\n"
   }
};

class Child : Parent {
public:
void sayHiByName(std::string.&name){
    std::cout << "Hi" << name <<"\n";
}

};
int main() {
Parent test ("Sten");
Child test_child;
test_child.sayName();
test_child.sayHiByName("Mike");
test.sayName();
    return 0;
}