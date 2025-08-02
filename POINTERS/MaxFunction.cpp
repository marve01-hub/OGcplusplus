#include<iostream>
using namespace std;
int maxOfTwo(int a , int b){
    if(a>b) return a;
    else return b;        
    } 
int main(){
    cout<<maxOfTwo(2,5)<<endl;
}