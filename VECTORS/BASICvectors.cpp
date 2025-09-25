#include<iostream>
#include<vector>
using namespace std;
int main(){

  //?   DECLARATIONS

    vector<int> v; //* created a empty vector
    v.push_back(1);//* stores 1 in empty vector = {1}
    v.emplace_back(2); //* dynamically inc size of vector and stores 2 in it = {1,2} -> Faster then push_back

    vector<pair<int, int>>vec;  //* VECTOR PAIR
    vec.push_back(make_pair(1, 2)); // if we write push_back we have to use {} to define it as pair but
    vec.emplace_back(1,2); //* no need to use {} bcz automatically consideres as pair -- better way

    vector<int> v(5,100); //* (size,number) = {100,100,100,100,100};

    vector<int> v(5); // stores some garbage value = {342,356474,53656754y6yg,g65735,453r3f}

    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1);  //! to COPY a VECTOR to other vector

    return 0;
}
