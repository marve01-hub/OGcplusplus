#include<iostream>
using namespace std;
int powlog(int a, int b){
    if(b==1) return a;
    if(b==0) return 0;
    int x = powlog(a,b/2);
    int RecAns = x * x;
    return RecAns ;
    
    
}

int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
     int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<powlog(a,b);
}