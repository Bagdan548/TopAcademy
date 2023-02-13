#include <iostream>
#include <string>
 
class Engine
{
public:
    Engine ()
    {
        power = 0;
        capacity = 0;
    }
 
    Engine(int _power, double _capacity)
    {
        power = _power;
        capacity = _capacity;
    }
    void setPower(int _power) {power = _power;};
    int getPower() {return power;};
    void setCapacity(double _capacity) {capacity = _capacity;};
    double getCapacity() {return capacity;};
private:
    int power;
    double capacity;
};
 
class Truck
{
public:
    Truck(Engine _engine, std::string _brand, int _carrying, std::string _registrationNumber)
    {
        engine = _engine;
        brand = _brand;
        carrying = _carrying;
        registrationNumber = _registrationNumber;
    }
    void setBrand(std::string _brand) {brand = _brand;};
    std::string getBrand() {return brand;};
    void setCarrying(int _carrying) {carrying = _carrying;};
    int getCarrying() {return carrying;};
    void setRegistrationNumber(std::string _registrationNumber) {registrationNumber = _registrationNumber;};
    std::string getRegistrationNumber() {return registrationNumber;};
 
    Engine engine;
private:
    std::string brand;
    int carrying;
    std::string registrationNumber;
};
 
 
int main()
{
    Truck scania(Engine(500,5.5), "SCANIA", 20, "ADK23239ER");
 
    scania.engine.setPower(660);
    std::cout << scania.engine.getPower() << std::endl;
 
    scania.engine.setCapacity(4.8);
    std::cout << scania.engine.getCapacity() << std::endl;
 
    scania.setBrand("SCANIATRUCK");
    std::cout << scania.getBrand() << std::endl;
 
    scania.setCarrying(34);
    std::cout << scania.getCarrying() << std::endl;
 
    scania.setRegistrationNumber("HDF3943JD");
    std::cout << scania.getRegistrationNumber() << std::endl;
 
    return 0;
}