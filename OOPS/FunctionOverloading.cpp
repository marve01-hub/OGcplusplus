#include <iostream>
using namespace std;
class Overloading{
public:
    void add(int a, int b){
        cout << a + b << endl;
}
    void add(int a, int b, int c){
        cout << a + b + c << endl;   //  Function overloading kai liye ya DataType diff. ho ya function ko same name ho, but diff. no. of arguments/parameters. 
    }
    void add(string a, string b){
        cout << a + b << endl;
    }
    // int add(int a, int b){
    //     return a + b;  // PRODUCE ERROR
    // }

    // int add(float a, float b){
    //     return a + b;  //  NO ERROR 
    // }

};

int main() {
    Overloading a1;
    a1.add(3, 4);
    a1.add(3, 4, 5);
    a1.add("Hello", "World");

}