#include<iostream>
using namespace std;
int main(){
    int arr[5][4] = {1,2,3,4,1,2,3,4,1,3,7,1,1,4,2,3,4,5,9,6};
    // int x1,y1,x2,y2;
    // x1 = 0; // i ki inisialization
    // y1 = 0; // j ki inisialization
    // x2 = 2; // i ki ending
    // y2 = 1; // y ki ending
    int sum = 0;

    for(int i = 1; i<= 4; i++){
        for(int j = 0; j<= 2; j++)
        sum += arr[i][j];
    }
    cout<<"Sum is : "<<sum;
}