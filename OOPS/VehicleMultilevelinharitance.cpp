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
        this->mileage = mileage;
        this->topspeed = topspeed;
        this->fuelType = fuelType;
    }
};

class TwoWheeler : public Vehicle {   // CHILD CLASS   
public:       
    string name;
};

class FourWheeler : public Vehicle {  // CHILD CLASS   
public:       
    string name;
};

class Bike : public TwoWheeler {  // GRAND CHILD CLASS   
public:        
    string name;
}; 

class Car : public FourWheeler { // GRAND CHILD CLASS   
public:        
    string name;
};

int main() {
    Car c("Tesla", 25, 250, "Electric");
    
    Bike b;
     
    

    c.display();
    b.display();
}