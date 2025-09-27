//! MAP stores Unique and Sorted Keys** (similar to SET datstructure)
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
  //? map<key,value> name; // key and value can be of any datatype  
    map<int ,int> m;   //* 1st kind of declaration 
    // map<int, pair<int, int>> m1; //* 1 key 2 values
    m[1] = 2; //! stores 2 in locker(key) 1
    //or
    m.emplace(3, 1); //stores 1 in key 3
    m.insert(2,4); // stores 4 in key 2

    map<pair<int, int>, int> m1; //* 2 keys 1 value (2nd type declaration)
    m1[{2,3}] = 13; //stores 10 in key-2 and 3

}