#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 1; i <= n; i++) {
    // space
    for(int j = 1; j <= i ;j++) {
        cout <<j;
    }

    // star
    for(int k = 1; k <= 2*n - (2*i + 1); k++) {
        cout << " ";
    }

    // space
    for(int l = 1; l <= i; l++) {
        cout << l;
    }
    cout<<endl;
    }
     
}

    
