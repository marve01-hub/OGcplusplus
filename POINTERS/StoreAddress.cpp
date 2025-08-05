#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p;
    p = &x;
    cout<<&x<<endl; // TO FIND/PRINT ADDRESS OF DATATYPE
    cout<<p<<endl;  // TO FIND/PRINT ADDRESS OF DATATYPE
    cout<<*p<<endl; // TO print  value of variable, *p = dereference operator**
    cout<<x<<endl;  // TO print  value of variable
    cout<<&p<<endl; // TO FIND/PRINT ADDRESS OF DATATYPE 
}