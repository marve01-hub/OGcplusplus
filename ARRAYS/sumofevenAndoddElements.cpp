#include<iostream>
using namespace std;
int main(){
    int SumEvenIndex = 0;
    int OddEvenIndex = 0;
    int arr[6] = {2,5,8,1,2,3};
    for(int i = 0; i < 6;i++){
        if(i%2==0){
            SumEvenIndex += arr[i];
        }
        else {
            OddEvenIndex += arr[i];
        }
            
    }
    cout<<"Diff : "<<SumEvenIndex-OddEvenIndex;
}