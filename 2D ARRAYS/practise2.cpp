#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<n;j++){
            if((i==n or j==1)  and (i==1 or j==n)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}    
