#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    // int arr[] = {5, 2, 8, 1, 9};
    // int n = 5;

    // sort(arr, arr + n);                    // Sort entire array
    // sort(arr + 2, arr + 4);                // Sort from index 2 to 3
    // sort(arr, arr + n, greater<int>());    // Descending order

    // vector<int> vec = {5, 2, 8, 1, 9};

    // sort(vec.begin(), vec.end());                      // Sort entire vector
    // sort(vec.begin() + 2, vec.begin() + 4);           // Sort from index 2 to 3 (sorting particular area) 
    // sort(vec.begin(), vec.end(), greater<int>());    // soting in decreasing order


    // int num = 7;
    // int cnt1=  __builtin_popcount(4);  // Returns 1 (binary: 100 has one 1-bit)
    // int cnt2 = __builtin_popcount(7);   // Returns 3 (binary: 111 has three 1-bits) 
             // __builtin_popcount(15)  // Returns 4 (binary: 1111 has four 1-bits)
             // __builtin_popcount(0)   // Returns 0 (binary: 0 has zero 1-bits) 
    // cout<<cnt1 <<" "<<cnt2;


    string s = "123"; // it gives all permutation following a dictonary type order
    sort(s.begin(),s.end());  // if want to get all permutaions of unsorted number/element
    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));

    // int mx = *max_element(a, a+n);  // find max element in array
    // int mx = *min_element(a, a+n);  // find min element in array
    // vector v = {2,54,1,33,74,11}
    // int mx = *max_element(v.begin(), v.end());
    // cout<<mx;
} 