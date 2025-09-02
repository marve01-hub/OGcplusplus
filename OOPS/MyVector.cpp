#include<iostream>
using namespace std;
class Vector{ 
public: 
    int size;
    int capacity;
    int* arr; // to make an dynamic array {resizeable}

    // above are initialized by a Default Constructor
    Vector(){
        size = 0;
        capacity = 1;
        arr  = new int[capacity]; // an array of size 1
    }

    void add(int element) {
        if(size==capacity) {
            capacity *= 2;  // for capacity
            int* arr2 = new int{capacity}; //  TO make  Vector
            for(int i = 0; i<size;i++) {
                arr2[i] = arr[i];
            }
            arr = arr2; // *** here the old array becomes same as new one 
        }
        arr[size] = element; // for size
        size++;
    }

    void print(){       // to print Vector
        for(int i = 0; i<size;i++) {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }
    void remove() {     // Size Decreased
        if(size==0) {
            cout<<"Array is Empty";
        }
        size--;
    }
};

int main() {
    Vector v ;
    v.add(10);
    v.print();
    v.add(2);
    v.print();
    v.add(7);
    v.print();
    v.remove(); // decresed size
    v.print();
}