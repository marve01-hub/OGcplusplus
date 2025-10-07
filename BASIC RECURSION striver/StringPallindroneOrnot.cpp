#include<iostream>
using namespace std;
#include<algorithm>
bool pal(int i, string &s){
    
    if(i>=s.size()/2) return true; //! agar hum index 0 se travel karte huye middle tak pohonch gaye to matlab sab ok ok hai
    if(s[i]!=s[s.size()-i-1]) return false;
    pal(i+1,s);
} 
int main(){
    string s = "madam";
    cout<<pal(0,s); 
}