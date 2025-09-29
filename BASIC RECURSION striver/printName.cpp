#include<iostream>
using namespace std;
void greet(int i, int n){
    if(i>n) return;
    cout<<"Hello"<<endl;
    
    
    
     greet(i+1,n); //!if we don't increase value of i then base condition will remain unused and will run till infinity and stack overflow happens
     
   
}
int main(){
    int n;
    cin>>n;
    greet(1,n);
}