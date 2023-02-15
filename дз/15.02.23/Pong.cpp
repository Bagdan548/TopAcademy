#include <iostream>

bool is_player (int x, int y, int pl_x, int pl_y){
    if (x==pl_x){
        if (y == pl_y || y == pl_y + 1 || y == pl_y - 1){
            return true;
        }
    }
return false;
}
int main() {

const int x = 41;
const int y = 11;
int pl_x = 2;
int pl_y = y / 2;

for(int i = 0; i <= y; i++){

    for (int j = 0; j < x; ++j){
        if(i == 0 || i == y){
        std :: cout <<"*";
        }else if (j == 0 || j ==x){
            std :: cout << "*";
        }else if (is_player (j,i,pl_x,pl_y)){
            std::cout<< "|";
        
        } else {
            std::cout << " ";
        }
        
    }
        
    
    std::cout <<"\n";
}

char in;
in = getchar();
// std::cin >> in;
if (in == 'a') {
pl_y--;
}else if (in =='z'){
pl_y++;
}else if (in == 'q'){

}

system("clear");
}
    return 0;
}