#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter vector elements: ";
    cin>>n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){ //* WAY TO TAKE INPUT OF VECTOR
        cin>>v[i];
    }
    
    sort(v.begin(), v.end()); //! Sorting in vector | vector not sorted already
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";  // printing sorted vector
    }
    cout<<endl;
    // auto it= lower_bound(v.begin(),v.end(),7); //! lower bound gives elememt itself if present or greater than it
    // if(it == v.end()){
    //     cout<<"Error"; // gives anty garbage value after v.end()
    // }
    // cout<< (*it) <<endl;  //* Lower bound of Target Value

    auto it= upper_bound(v.begin(),v.end(),4); //! upper bound gives elememt greater than it if it is present or not
    if(it == v.end()){
        cout<<"Error: not found"; // gives any garbage value after v.end()
    }
    cout<< (*it) <<endl;  //* Lower bound of Target Value

}