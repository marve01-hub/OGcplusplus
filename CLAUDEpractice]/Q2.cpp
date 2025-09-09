#include <iostream>
using namespace std;

void areaOfRectangle(float l, float b) {
    cout << "Area of Rectangle: " << l * b << endl;
}
int main() {
    float a,b;
    cout<<"Enter l and b integers: ";
    cin>> a >> b;
    areaOfRectangle(a, b);    
}