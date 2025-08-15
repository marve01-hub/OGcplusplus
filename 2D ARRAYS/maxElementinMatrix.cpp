#include<iostream>
using namespace std;
int main(){
   int arr[2][3] = {-2,-5,3,-4,8,11};
   int mx = INT16_MIN;    // smallest value 
   for(int i = 0; i<2;i++){
        for(int j = 0;j<3;j++){
             mx = max(mx,arr[i][j]);
        }
   
   }
   cout<<"Max is : "<<mx;
}