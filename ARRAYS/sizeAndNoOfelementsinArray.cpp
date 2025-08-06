#include<iostream>
using namespace std;
int main(){
   int arr[] = {2,5,3,6,7,5,1};
   int n = sizeof(arr)/4;
   int sum = 0;
   for(int i = 0; i<=n;i++){
       sum += arr[i];   
   }
   cout<<sum;

//    cout<<sizeof(arr); // total memory used 
//    cout<<sizeof(arr)/4; // know no. of elements
}