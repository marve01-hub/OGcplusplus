#include<iostream>
using namespace std;
int main(){
    // storing 5 variables --> 5,3,8,2,6
    int arr[5] = {2,4,1,7,6}; // DECLARATION + INITIALIZATON**
    //int arr[] = {2,4,1,7,6}; // DECLARATION + INITIALIZATON** ---. same thing

    for(int i = 0; i<= 4; i++){ // output
        cout<<arr[i]<<" ";
    }
}