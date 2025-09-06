#include<iostream>
using namespace std;

/*!Vehicle (Base/Parent)
    ↓
TwoWheeler (Intermediate/Child) ──── FourWheeler (Intermediate/Child)
    ↓                                      ↓
Bike (Derived/GrandChild)              Car (Derived/GrandChild)*/ 

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
    TwoWheeler(string name, float mileage, int topspeed, string fuelType)
     : Vehicle(name, mileage, topspeed, fuelType) {}  //! CONSTRUCTOR CHAINING
};

class FourWheeler : public Vehicle {  // CHILD CLASS   
public:       
    FourWheeler(string name, float mileage, int topspeed, string fuelType)
     : Vehicle(name, mileage, topspeed, fuelType) {}  //! CONSTRUCTOR CHAINING
};

class Bike : public TwoWheeler {  // GRAND CHILD CLASS   
public:        
     Bike(string name,float mileage, int topspeed, string fuelType) //! CONSTRUCTOR CHAINING
        : TwoWheeler(name, mileage, topspeed, fuelType) {}
}; 

class Car : public FourWheeler { // GRAND CHILD CLASS   
public:        
    Car(string name, float mileage, int topspeed, string fuelType) 
    : FourWheeler(name, mileage, topspeed, fuelType) {}  //! CONSTRUCTOR CHAINING
};

int main() {
    Car c("Tesla", 25, 250, "Electric");
    Bike b("Harley", 15, 180, "Gasoline");
    c.display();
    b.display();
}