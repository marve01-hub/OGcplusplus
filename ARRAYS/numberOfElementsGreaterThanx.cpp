#include<iostream>
using namespace std;
int main(){
    int arr[6] = {2,5,8,1,2,3};
    int count = 0;
    for(int i = 0; i < 6;i++){
        if(arr[i]>2)
        count ++;
    }
    cout<<count;
}