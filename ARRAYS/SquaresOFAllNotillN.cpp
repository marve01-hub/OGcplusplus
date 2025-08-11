#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n;i++){  //  STORING ELEMENTS IN ARRAY
        arr[i] = (i+1)*(i+1);
    }
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}