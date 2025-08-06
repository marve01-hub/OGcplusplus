#include<iostream>
using namespace std;
int main(){
   int arr[] = {23,2};
   int n = sizeof(arr)/4;
   int product = 1;
   for(int i = 0; i<n;i++){
       product *= arr[i];   
   }
   cout<<product;

//    cout<<sizeof(arr); // total memory used 
//    cout<<sizeof(arr)/4; // know no. of elements
}