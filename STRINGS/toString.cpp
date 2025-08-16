#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int x = 3624798;
    string s = to_string(x/10); // TO STRING CONVERTS INT TO STRING
    cout<<s.length(); // to find no of digits
}