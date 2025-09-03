#include<iostream>
using namespace std;
int nthDay(int d, int n) {
    int ans = (d - n) % 7;
    if (ans < 0) ans += 7;  // to keep it within 0–6 or to keep +ve
    cout<< ans;
}
int  main(){
    int d,n;
    cout<<"enter n , d:  ";
    cin>>d >> n;
    nthDay(d,n);
}
 