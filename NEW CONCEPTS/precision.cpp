#include <iostream>
#include <iomanip>
using namespace std; 

void precise(float a, float b) {
    // perform a/b
    double  c = a/b;
    // return a/b;
    
    cout << c << " " << setprecision(3) << fixed << c << endl;
}
int main(){
    
    precise(5.43,2.643);

  //! ACTUAL USE OF{fixed and peicison}   
    // double num1 = 3.12345678;
    // cout << fixed << showpoint;
    // cout << setprecision(2);
    // cout << num1 << endl;  

}