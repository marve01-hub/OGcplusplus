#include<iostream>
using namespace std;
int main(){
   int arr[] = {-2,-5,-3,-4};
   int n = sizeof(arr)/4; // no of integers
   int mx = INT16_MIN;    // smallest value 
   for(int i = 0; i<n;i++){
    //    if(arr[i]>mx) mx = arr[i]; // *********
    mx = max(mx,arr[i]);
   }
   cout<<mx;
}