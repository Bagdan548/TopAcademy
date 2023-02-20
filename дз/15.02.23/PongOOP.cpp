class Ball{

};

class Rocket{
    private:
    int x;
    int y;

    public:
    Rocket() {}
      Rocket() :  Rocket(0,0) {}
      Rocket(const Rocket &other): 
      Rocket(other.x, other.x) {}
        
}