#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int cnt = 0;
    while(n>0){
        int last_digit = n % 10;
        cnt = cnt + 1;
        n = n/10;
    }
     cout<<cnt;
}