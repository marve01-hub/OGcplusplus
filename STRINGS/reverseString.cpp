#include <iostream>
#include<string>
#include<algorithm> // for reverse
using namespace std;
int main(){
    string s = "Parteek";
    cout<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
}