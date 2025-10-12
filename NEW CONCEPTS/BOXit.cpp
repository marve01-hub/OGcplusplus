#include<bits/stdc++.h>

using namespace std;
class Box{
public:
    int l,b,h;
    // Box();
    Box(){
        l=b=h=0;
    }
    // Box(int,int,int);
    Box(int l,int b,int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }
    
    // Box(Box);   = Copy constructor
    Box(const Box& copy){   // Creates a copy of another Box object.
        l = copy.l;
        b = copy.b;
        h = copy.h;
    }
    
    int getLength() const{  // const bcz they dont modify object
        return l;
    }
    int getBreadth() const{
        return b;
    }
    int getHeight() const{
        return h;
    }
    
    long long CalculateVolume(){
        return (long long)l*b*h;
    }
    
    friend bool operator<(Box& A, Box& B ) {
        if(A.l < B.l) return true;
        else if((A.b < B.b) && (A.l == B.l)) return true;
        
        else if(A.l == B.l && A.b == B.b && A.h < B.h) {
            return true;
        }
        else return false;
    }
    
    friend ostream& operator<<(ostream& out, Box& B){
        out << B.l << " " <<  B.b << " " << B.h;
        return out;
    }
};  

int main() {
    // Test cases
    Box b1;  // Default constructor: l=0, b=0, h=0
    cout << "Box b1: " << b1 << endl;
    cout << "Volume: " << b1.CalculateVolume() << endl;
    
    Box b2(2, 3, 4);  // Parameterized constructor
    cout << "\nBox b2: " << b2 << endl;
    cout << "Length: " << b2.getLength() << endl;
    cout << "Breadth: " << b2.getBreadth() << endl;
    cout << "Height: " << b2.getHeight() << endl;
    cout << "Volume: " << b2.CalculateVolume() << endl;
    
    Box b3(b2);  // Copy constructor
    cout << "\nBox b3 (copy of b2): " << b3 << endl;
    
    // Test < operator
    Box b4(1, 2, 3);
    Box b5(2, 3, 4);
    
    if(b4 < b5) {
        cout << "\nb4 is less than b5" << endl;
    } else {
        cout << "\nb4 is not less than b5" << endl;
    }
    
    return 0;
}