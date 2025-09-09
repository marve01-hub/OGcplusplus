#include <iostream>
#include <cmath>
using namespace std;

class Math {
public:
    double power(int base, int exp) { //! used double bcz built in power function is best for double 
        return pow(base, exp);
    }
    
    double power(float base, int exp) {
        return pow(base, exp);
    }

    double power(int base, float exp) {
        return pow(base, exp);
    }
};

int main() {
    int baseInt, exponentInt;
    float baseFloat, exponentFloat;

    Math m;

    cout << m.power(2, 5)<<endl;
    cout << m.power(2.4f, 4)<<endl; //!     USE f along with float parameters**
    cout << m.power(3, 4.4f)<<endl; //!     USE f along with float parameters**
    return 0;
}
