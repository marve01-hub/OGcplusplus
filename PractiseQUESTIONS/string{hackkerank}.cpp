#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string a;
    string b;
    cin>> a >> b; 
    string a1 = a;
    string b2 = b;
    
    
    int len1 = a.size();
        int len2 = b.size();
        
    char temp = a1[0];
    a1[0] = b2[0];
    b2[0] = temp;

    cout<< len1 << " " << len2 << endl;
    cout<< a+b << endl;
    cout<< a1 << " " << b2;
    
    
    
    return 0;
}
