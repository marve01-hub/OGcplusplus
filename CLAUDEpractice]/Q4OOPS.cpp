#include <iostream>
using namespace std;
class Calculator {
public: 
    float add(float a, float b) {
        return a + b;
    }
    float subtract(float a, float b) {
        return a - b;
    }
    float multiply(float a, float b) {
        return a * b;
    }
    float divide(float a, float b) {
        if(b == 0) { //! bcz anything divided by zero is undefined 
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        else{
        return a / b;
        }
    }
};

int main() {
    Calculator c1;
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << c1.add(num1, num2) << endl;
    cout << "Subtraction: " << c1.subtract(num1, num2) << endl;
    cout << "Multiplication: " << c1.multiply(num1, num2) << endl;
    cout << "Division: " << c1.divide(num1, num2) << endl;
    return 0;

}