#include<iostream>
using namespace std;
class TwoWheeler {    // PARENT CLASS / MAIN CLASS
public: 
    string name;
    int topspeed;
private:
    int diggi;    
};
class Scooty : public TwoWheeler {   // CHILD CLASS / SUBCLASS
public:        // can access all public members of parent class except Private class members
    int topspeed;
};
int main() {
    Scooty s1;
    s1.name = "Activa 5g";
    s1.topspeed = 120;
    cout << "Name: " << s1.name << endl;
    cout << "Top Speed: " << s1.topspeed << " km/h" << endl;
    return 0;

}