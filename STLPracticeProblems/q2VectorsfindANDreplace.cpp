#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main() {
    int n;
    // int count = 0;
    cout<<"enter n: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    int total_count  = count(v.begin(),v.end(),3); //! to find total occurence of a element
    cout<< total_count<<endl; 

    replace(v.begin(),v.end(),3,99);  //! syntax: replace(v.begin(),v.end(),target vlaue, to change into vali value)
    for(auto it : v){                 //*  REPLACING OF AN ELEMNT WITH ANOTHER 
        cout<< it << " "; 
    }
}