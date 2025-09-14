#include <iostream>
using namespace std;

void goodFunction() {
    int* arr = new int[1000000];  // Allocate 4MB
    
    // Use the array
    for(int i = 0; i < 1000000; i++) { //! make space in array to store 1000000 integer values
        arr[i] = i;
    }
    
    // ALWAYS clean up!
    delete[] arr;  // Free the 4MB back to the system
     
    /* if we don't clean up our program will end but the space will be occupird,
     so there will be less memory available in program or may be system */ 
     
    cout << "Memory properly cleaned up!" << endl;
}

int main() {
    for(int i = 0; i < 1000; i++) {
        goodFunction();  // No memory leaks!
    }
    
    return 0;
}