#include<iostream>
using namespace std;
void fibo(int n){
    if(n==0) return; 
    fibo(n-1);     
    cout<<n<<endl;  
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fibo(n);
}