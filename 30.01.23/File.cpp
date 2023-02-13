#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream fin;

fin.open(" name.txt");
    std :: string name;


    std::cout<<"Input your name";
  .//std::cin >> name;
fin >> name;
    std :: cout <<"Hello"<< name >> "!n\"
    return 0;
}