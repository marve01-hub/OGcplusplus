#include<iostream>
using namespace std;
#include<algorithm>
void rev(int i,int arr[],int n){
    
    if(i>=n/2) return;  //! bcz middle ya uske aage vale swap nhi karne hain | Why n/2? Because we swap elements from both ends moving toward center 
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    rev(0,arr,n);
    for(int i = 0;i<n;i++) cout<<arr[i];
}