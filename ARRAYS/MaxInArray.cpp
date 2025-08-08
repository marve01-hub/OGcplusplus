#include<iostream>
using namespace std;
int main(){
   int arr[] = {2,5,3,64,7,51,1};
   int n = sizeof(arr)/4;
   int mx = arr[0];
   for(int i = 0; i<n;i++){
       if(arr[i]>mx) mx = arr[i]; 
   }
   cout<<mx;
}