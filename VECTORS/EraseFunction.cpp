#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v; 
    v = {2,4,6,3,1};  // initial vector
 //!   v.erase(address from starting, address from ending)
    v.erase(v.begin()+1, v.begin()+3);  //* erases elements from index 1 to index 3-1 = 2
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<< *(it) << " ";
    }


}