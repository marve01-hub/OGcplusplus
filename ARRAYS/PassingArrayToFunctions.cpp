#include<iostream>
using namespace std;
void change(int arr[]){ // way to recieve array
    arr[0] = 7;
}
int main(){
    int arr[3] = {3,5,2};
    for(int i = 0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i = 0;i<=2;i++){
        cout<<arr[i]<<" ";
    }
}