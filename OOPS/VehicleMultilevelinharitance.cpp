#include<iostream>
using namespace std;
class Vehicle {     // PARENT CLASS
public: 
    string name;
    float mileage;
    int topspeed;
    string fuelType;

    void display() {
        cout<< "Name: " << name << "Mileage: " << mileage << ", Top Speed: " << topspeed << ", Fuel Type: " << fuelType << endl;
    }

    Vehicle(string name,float mileage, int topspeed, string fuelType) {
        this->name = name;
        this->mileage = mileage;
        this->topspeed = topspeed;
        this->fuelType = fuelType;
    }
};

class TwoWheeler : public Vehicle {   // CHILD CLASS   
public:       
    TwoWheeler(string name, float mileage, int topspeed, string fuelType) : Vehicle(name, mileage, topspeed, fuelType) {}  // Constructor chaining
};

class FourWheeler : public Vehicle {  // CHILD CLASS   
public:       
    FourWheeler(string name, float mileage, int topspeed, string fuelType) : Vehicle(name, mileage, topspeed, fuelType) {}  // Constructor chaining
};

class Bike : public TwoWheeler {  // GRAND CHILD CLASS   
public:        
     Bike(string name,float mileage, int topspeed, string fuelType)
        : TwoWheeler(name, mileage, topspeed, fuelType) {}
}; 

class Car : public FourWheeler { // GRAND CHILD CLASS   
public:        
    Car(string name, float mileage, int topspeed, string fuelType) : FourWheeler(name, mileage, topspeed, fuelType) {}  // Constructor chaining
};

int main() {
    Car c("Tesla", 25, 250, "Electric");
    Bike b("Harley", 15, 180, "Gasoline");
    c.display();
    b.display();
}