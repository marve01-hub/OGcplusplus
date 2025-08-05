#include<iostream>
using namespace std;
int main(){
    // storing 5 variables --> 5,3,8,2,6
    int arr[5]; // DECLARATION
    cout<<"enter array element : ";
     for(int i = 0; i<= 4; i++){ // took input
        cin>>arr[i];
    }
    // OR

    // arr[0] = 5; //SET
    // arr[1] = 3; 
    // arr[2] = 8; 
    // arr[3] = 2; 
    // arr[4] = 6; 

    for(int i = 0; i<= 4; i++){
        cout<<arr[i]<<" ";
    }
    arr [0] = 100; // UPDATE
    cout<<endl;
    for(int i = 0; i<= 4; i++){
        cout<<arr[i]<<" ";
    }
}