#include<iostream>
using namespace std;
int main(){
    int arrA[] = {1,2,3,4,5};
    int n = sizeof(arrA)/4;
    int arrb[n];
    for(int i = 0; i<n; i++){
        int j = n - 1 - i; // ******
        arrb[i] = arrA[j]; // ******
    }
    for(int i = 0; i<5; i++){
        cout<<arrb[i]<<" ";
    }
}