#include<iostream>
using namespace std;
class Car{  // Created a NEw data type by me = user defined data type
public:
       string name;
       int price;
       float seats;
};

void details(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}

// void change(Car c1){   // PASS BY VALUE
//     c1.name = "Lambo";
// }


void change2(Car& c1){  // PASS BY REFERENCE
    c1.name = "Lambo";
}
int main() {
    Car c1;  // DECLARATION
    c1.name = "Lamborghini";   //  WAY TO INITIALIZAION
    c1.price = 20000000;           //INITIALIZAION
    c1.seats = 2;              //INITIALIZAION

    // Car c2;
    // c2.name = "Buggati";
    // c2.price = 20000000;
    // c2.seats = 2;

    details(c1);
    // change(c1);   // PASS BY VALUE 
    change2(c1);     // PASS BY REFERNCE
    details(c1);
    // details(c2);
    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats;
}