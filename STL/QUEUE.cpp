#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.back() += 3; // {1,5} 
    cout<< q.back()<<endl;

    q.pop(); // {5} deletes 1st/ front elemen
    cout<< q.front(); // 5 is front now

    // swap,size,empty same as stack

}