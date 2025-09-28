#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int org = n;
    int ams = 0;
    while(n>0){
        int ld = n % 10;
       
        ams = ams+(ld*ld*ld);
        n = n/10;
        
    }
    cout<<ams<<endl;
    if(org == ams){
        cout<<"n is Armstrong";
    }
    else {
        cout<<"not armstrong";
    }


}