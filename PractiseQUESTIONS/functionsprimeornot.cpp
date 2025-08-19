#include<iostream>
using namespace std;
void pr(int x){
    if(x%2==0){
        cout<<"even";
    }
    return;
}
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    pr(n);
}
