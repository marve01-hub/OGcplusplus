#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }
    // precompute
    unordered_map<int,int> mpp;
    for(int  i= 0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cout<<"Enter no. of Queries: ";
        cin>>q;
        //fetch
        cout<<mpp[num]<<endl;
    }

}

