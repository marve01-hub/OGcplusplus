#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p;
    p = &x;
    cout<<&x<<endl; // TO FIND ADDRESS OF DATATYPE
    cout<<p<<endl;  // TO FIND ADDRESS OF DATATYPE
    cout<<*p<<endl; // TO print  value of variable
    cout<<x<<endl;  // TO print  value of variable
}