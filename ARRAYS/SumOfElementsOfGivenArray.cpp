#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3,4};
    // cout<<arr[0] + arr[1] + arr[2] + arr[3];
    // OR
    int sum = 0;
    for(int i = 0;i<=3;i++){
        sum += arr[i];

    }
    cout<<sum;
}