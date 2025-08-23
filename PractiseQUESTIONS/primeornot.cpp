#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int flag = 0;  // 0 means prime unless proven otherwise

    if (n <= 1) { //  not prime by definition therefore removed already
        flag = 1;  // not prime
    } else {
        for (int i = 2; i <= n / 2; i++) { // from here number can be prime
            if (n % i == 0) {
                flag = 1;  // not prime
                break;  // it means if this condition is true niche vala nhi chalega
            }
        }
    }
    if (flag == 0)
        cout << n << " is a Prime number.";
    else
        cout << n << " is NOT a Prime number.";

    return 0;
}