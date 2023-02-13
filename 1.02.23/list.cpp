#include <iostream>
#include <list>
void print_list(const std::list<int>&list){
    std::cout <<"Size = " << list.size()<< "\n";
    for (std::list<int>::const_iterator i=list.begin());
    i !=list.end();
    ++i) {
        std::cout <<*i <<" ";

    }
    std::cout <<"\n";
}
int main(){
    std::list<int>&list)

}