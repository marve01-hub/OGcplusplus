#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0; i < n; i++) {
    // space
    for(int j = 0; j < n - i - 1; j++) {
        cout << " ";
    }

    // characters
    char ch = 'A';
    int breakpoint = (2*i+1)/2; //! ** after this breakpoint ch start decresing 
    for(int j= 1; j<=2*i+1;j++){
            cout<<ch; 
            if (j<= breakpoint) ch++;
            else ch--;  
        }
      

    // space
    for(int l = 0; l < n - i - 1; l++) {
        cout << " ";
    }
    cout<<endl;
    }   
}

    
