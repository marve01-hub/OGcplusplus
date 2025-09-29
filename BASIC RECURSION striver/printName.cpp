#include<iostream>
using namespace std;
void greet(int n, int i){
    if(n<i) return;
    cout<<n<<endl;
    
    
    
     greet(n-1,i); 
     
   
}
int main(){
    int n;
    cin>>n;
    greet(n,1);
}