#include <iostream>
using namespace std;
int main(){
    int arr[5][5];
    for(int i = 0;i < 5; i++){     // rows
        for(int j = 0;j < 5; j++){ // colms
            arr[i][j] = 10;
    } 

}
for(int i = 0;i < 5; i++){     // rows
        for(int j = 0;j < 5; j++){ // colms
            cout<<arr[i][j]<<" ";
    } 
    cout<<endl;
}
}
