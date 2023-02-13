#include <iostream>
#include <vector>

int main(){

int pointer_array[5] [1,2,3,4,5];
std::cout << pointer_array[-1]<<"\n";
std::vector <int> array(&(pointer_array[0]), &(pointer_array[5]));


for(int i = 0, i < array.size();i++) {
std:: cout << array[i]<<" ";
}
std::cout <<"\n";
return 0;
}