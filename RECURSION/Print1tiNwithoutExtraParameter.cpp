#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // basecase
    print(n-1);     // call
    cout<<n<<endl;  // work
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    print(n);
}