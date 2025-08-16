#include <iostream>
using namespace std;
int main(){
    string s = "parteek is a good boy and he is doing c++ now";
    int n = s.length();
    int count = 0;
    for(int i = 0; i<n;i++){
  
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u')
        count++;
    }
   cout<<count;
    
}