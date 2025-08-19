#include <iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 1; i<=x; i++){
        f *= i;
    }
    return f;
}

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;

    int r;
    cout << "Enter r : ";
    cin >> r;

    int a = fact(n);             // contains a ka factorial    
    int b = fact(r);             // contains b ka factorial   
    int c = fact(n-r);             // contains c ka factorial
    cout<<a/(b*c);

}
   
