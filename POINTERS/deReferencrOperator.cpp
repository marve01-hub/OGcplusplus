#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<x<<endl;     
    *p = 23; // x = 23
    cout<<x<<endl;
}
