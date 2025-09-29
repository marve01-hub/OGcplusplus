#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter n1,n2: ";
    cin>>n1 >>n2;
   
    //* EUCLEDIAN ALGORITM  -> T.C = logp{(fie)[min(a,b)]}

        // while(n1>0 && n2>0){
        //     if(n1>n2) n1 = n1%n2;
        //     else n2 = n2%n2;

        // }
        // if(n1==0) cout<<n2;
        // else cout<<n1;
//*OR

         int gcd = 1;
        for(int i = min(n1,n2);i>=1;i++){
            if(n1%i==0 && n2%i==0){
                gcd = i;
                
            }

            cout<<gcd<<endl;
        break;
    }

}