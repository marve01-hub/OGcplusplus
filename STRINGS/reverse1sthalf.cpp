#include <iostream>
#include<string>
#include<algorithm> // for reverse
using namespace std;
int main(){
    string s = "Parteek1";
    cout<<s<<endl;
    int n = s.length();
    // reverse(s.begin(), s.begin()+n/2);
    //  cout<<s<<endl;
     reverse(s.begin()+2, s.begin()+5);
     cout<<s<<endl;
}