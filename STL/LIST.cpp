//! LINK IS SAME AS VECTOR

//! List elements are "connected" - they know each other | have info about next and previous elements
//! Vector elements are "isolated" - they're just data sitting next to each other | no info about each other
//! The container (list/vector) manages the organization, but only list elements actively participate in navigation! 

#include<iostream>
#include<list>
using namespace std;
int main(){
list<int> ls; //* DECLARATION
    ls = {2,4,6};  // initial list
    ls.push_back(7); // {2,4,6,7}
    ls.push_front(1); // {1,2,4,6,7}
    ls.pop_back(); //* {1,2,4,6} = removes last element
    ls.pop_front(); // {2,4,6}

    // rest functions are same as vectors
    // like size(), clear(), swap(), insert(), erase(), begin(), end() etc.
    for(auto it : ls) {
        cout<< it << " ";
    }

}