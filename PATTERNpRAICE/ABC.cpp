#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i = 0;i <n;i++){
        char ch = 'A' + i;  //! CONCEPT BOLTE*  in each new row new alphabet will come
        for(int j = 0;j<=i;j++)
        cout<<ch;
        cout<<endl;
    } 
}
