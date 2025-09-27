#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout<<"enter n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // for (auto it = v.begin(); it != v.end(); ++it) {  //* Taking sum of all elements
    //     sum += *it;
    // }
    //OR
    for (auto val : v) {  //* Taking sum of all elements**
        sum += val;
    }
    cout<< sum<<endl;
    
    // for(auto it = v.end()-1; it != v.begin()-1; it--) { // reversing whole vector
    //     cout<< *(it) << " ";
    // }
    //*or

    for(auto it = v.rbegin(); it != v.rend(); it++) { // ** USE OF REVERSE ITERATOR
        cout<< *(it) << " ";
    }

}