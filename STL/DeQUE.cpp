// DeQue Same as vector and lists

#include<iostream>
#include<deque>         
using namespace std;
int main(){
    deque<int> dq;
    dq = {2,4,6};  // initial deque
    dq.push_back(7); // {2,4,6,7}
    dq.push_front(1); // {1,2,4,6,7}
    dq.pop_back(); //* {1,2,4,6} = removes last element
    dq.pop_front(); // {2,4,6}

    // rest functions are same as vectors and lists
    // like size(), clear(), swap(), insert(), erase(), begin(), end() etc.
    for(auto it : dq) {
        cout<< it << " ";
    }
}