#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v; 
    v = {2,4,6,3,1};  // initial vector
    v.insert(v.begin()+1,8); // to store single elements
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<<endl;
     v.insert(v.begin()+1,2,5); // to store multiple elements =v.begin(POSITION,NO OF ELEMENTS,ELEMENT TO STORE)
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<< *(it) << " ";
    }

}