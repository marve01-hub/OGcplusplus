//! MULTISET = SORTED(ascending orer ) +  not UNIQUE(stores all values of same element) [takes O(logn) for each function]
#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> m;
    m.insert(1); // {1}
    m.insert(4); // {1,4}
    m.insert(4); // {1,4,4}
    m.insert(2); // {1,2,4,4}

//     auto it = m.find(5); //! find() -> returns iterator - points to element location
//     cout << *it<<endl; //! Returns 3(st.end()) bcz if element is not present its points after last 
    //! element  

    /*MultiSet: [1] [2] [4] [end marker]
                            ↑
                   st.end()*/    


//     int cnt = m.count(3); // gives 1 if element is there and 0 if no element is there
//     cout<< cnt<<endl; // returns 0 bcz 3 is not present 

    //* Ways to erase  //! if we erase any element all of its copies(or same element ) will be erased
 //  a.> By Direct giving element //* deletes all same element
    //      m.erase(4); // erases all 4's
    // for(auto it : m){
    //     cout<< it <<" ";
    // }

    //     m.erase(4); // erases all 4's
    // for(auto it : m){
    //     cout<< it <<" ";
    // }
  // b.> By providing address(iteraor) of element it delets only elemnet at that prticular addess
   
        auto it1 = m.find(1);
        auto it2 = m.find(2);
        m.erase(it1,it2); //returns {1,4,5}
     for(auto it : m){
        cout<< it <<" ";
    }
//   //? UPPER BOUND and LOWER BOUND  
//          multiset<int> m1;
//     m1.insert(1); // {1}
//     m1.insert(4); // {1,4}
//     m1.insert(4); // {1,4,4}
//     m1.insert(2); // {1,2,4,4}
    
//     auto it = m1.lower_bound(3); //! lower bound usi elements ka iterator if present either us se just biggeer elemnt ka iterator deta hai
//     cout<< *(it) << endl;
    
    // auto it = m1.upper_bound(0); //! upper bound hamesha target element se just bigger element ka iterator hi dega present or not 
    // cout<<*(it) <<endl;
}