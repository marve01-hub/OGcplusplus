#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.emplace(5); // {5,2,1}

    cout<<st.top(); // gives 

    st.pop(); // {2,1} removes top element

    stack<int> st1, st2;
    st1.swap(st2);
}