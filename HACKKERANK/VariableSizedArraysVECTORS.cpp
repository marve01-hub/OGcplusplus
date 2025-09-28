#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n,q;
    
    cin>>n>>q;
    vector<vector<int>> a; //! vector of vectors { each index of 'a' conatains vectors of different sizes} initialy empty
    for(int i = 0;i<n;i++){
        int k;
        cin>>k; //* length of arrays/vectors
        vector<int> v(k);
        for(int j = 0;j<k;j++){
            cin>>v[j];  //* Taken input of elements 
        } 
        a.push_back(v); //! we passed the smaller vectors in bigger vector a 
    }

    for(int qi=0; qi<q; qi++){  //! elements needed from  these index  
    int x,y;
    cin >>x>>y;   //* giving index 
    cout << a[x][y] <<endl; //! giving elemeents at indices given above 
}
}
