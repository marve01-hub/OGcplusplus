#include<iostream>
#include<vector>
using namespace std;
int main(){

  //   DECLARATIONS
    vector<int> v; // created a empty vector
    v.push_back(1);// stores 1 in empty vector = {1}
    v.emplace_back(2); // dynamically inc size of vector and stores 2 in it = {1,2}

    vector<pair<int, int>>vec;
    vec.push_back(make_pair(1, 2)); // if we write push_back we have to use {} to define it as pair but
    v.emplace_back(1,2); // no need to use {} bcz automatically consideres as pair -- better way

    vector<int> v(5,100); // (size,number) = {100,100,100,100,100};

    vector<int> v(5); // stores some garbage value = {342,356474,53656754y6yg,g65735,453r3f}

    vector<int> v1(5,20);
    vector<int> v2(v1);  // to copy a vector to ohter vector 
    
    
}
