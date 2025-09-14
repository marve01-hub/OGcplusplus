#include <iostream>
using namespace std;

int main() {
    // SINGLE OBJECT
    int* singleInt = new int(42);        // Allocate ONE integer
    char* singleChar = new char('A');    // Allocate ONE character
    
    // Use them
    cout << *singleInt << endl;   // 42
    cout << *singleChar << endl;  // A
    
    // CORRECT cleanup for single objects
    delete singleInt;    // Free ONE integer
    delete singleChar;   // Free ONE character
    
    return 0;
}