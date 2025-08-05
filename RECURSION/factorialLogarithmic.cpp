#include<iostream>
using namespace std;
int powlog(int a, int b){
    if(b==1) return a;
    else if(b%2==0)  return powlog(a,b/2) * powlog(a,b/2);
    
    
}

int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
     int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<powlog(a,b);
}