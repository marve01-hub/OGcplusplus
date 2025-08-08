#include<iostream>
using namespace std;
int main(){
   int arr[] = {2,5,3,64,7,51,1};
   int n = sizeof(arr)/4; // no of integers
   int mn = arr[0];       //started from 0th index
   for(int i = 0; i<n;i++){
    //    if(arr[i]<mx) mx = arr[i]; // *********
    mn = min(mn,arr[i]);
   }
   cout<<mn;
}