#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int* p = &x;
    cout<<x<<endl;      // hello vscode
    *p = 23; // x = 23
    cout<<x<<endl;
}
