#include<iostream>
using namespace std;
void f(int i,int sum){
    if(i<1){  //! i<1  bcz 1-1=0 | if se take i<0 => 0-1 = -1 then we will be adding -ve numbers
        cout<<sum;
        return;
    }
    f(i-1,sum+i);  
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    f(n,0);
}