#include <iostream>
using namespace std;
class Point{
    private:
    int x.y;

    public:
    Point() : Point(0,0){}

    Point(const point &other) : Point(other.x, oher.y){}

    Point(int x, int y){
        this->x=x;
        this->y=y;

    }
Point &operator+(int val){
     this->x=x+val;
        this->y=y+val;

}
Point &operator+(const Point &other){
     this->x=x+other x;
        this->y=y+other.y;

}
void print{
    std::cout <<"["<<this->x<<","<<this->y<<"[\n";
}

};

int main(int argc, char const *argv[])
{
    Point a(3, 5);
    Point b(2, 1);

    a=5;
    a.print();
    a=b;
    a.print();
    return 0;
}