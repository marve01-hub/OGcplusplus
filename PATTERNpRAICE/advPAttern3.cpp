#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int num = 0;
    for(int i = 1;i <=n;i++){
        for(int j = 1;j<=i;j++)
        cout<<j + num;
        num  = num + i;
        cout<<endl;
    }
    
}
