#include<iostream>
using namespace std;
int main(){
   int arr[5] = {-2,-5,3,-4,-1};
   int mx = INT16_MIN;    //  initialized withvsmallest value 
   for(int i = 0; i<5;i++){
    mx = max(mx,arr[i]); // finding max b/w  mx &  array elements
   }
   int smx =  INT16_MIN;
   for(int i = 0; i<5;i++){
   if(arr[i]!=mx) {
    smx = max(smx,arr[i]); 
   }
   }
   cout<<smx;
}