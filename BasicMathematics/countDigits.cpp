#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    // int cnt = 0;

    //! *Method by Log
    int cnt = (int)(log10(n)) + 1; //!time complexity when number of iterations depend upon division then TC is logarithmic
    cout<<cnt;


    // while(n>0){
    //     int last_digit = n % 10;
    //     cnt = cnt + 1;
    //     n = n/10;
    // }
    //  cout<<cnt;


}