#include<iostream>
#include<queue>
using namespace std;
int main(){
    //! Max Heap
    priority_queue<int> pq;
    pq.push(1); // {1}
    pq.push(2); // {2,1}
    pq.push(4); // {4,2,1}
    pq.push(3); // {4,3,2,1}

    cout<< pq.top() << endl;
    pq.pop(); // {5} deletes 1st/ front element
     cout<< pq.top()<<endl;
    // swap,size,empty same as stack

    //! Minimum Heap
    priority_queue<int, vector<int>,greater<int>>pq1;
    pq1.push(5); //{5}
    pq1.push(2); // {2,5}
    pq1.emplace(8); //{2,5,8}
    cout<<pq1.top();  // returns 2


}