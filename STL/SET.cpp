//! SET = SORTED(ascending orer ) + UNIQUE(stores only 1 value of same thing) [takes O(logn) for each function]
#include<iostream>
#include<set>
using namespace std;
int main(){
//     set<int> st;
//     st.insert(1); // {1}
//     st.insert(4); // {1,4}
//     st.insert(4); // {1,4}
//     st.insert(2); // {1,2,4}

//     auto it = st.find(5); //! find() -> returns iterator - points to element location
//     cout << *it<<endl; //! Returns 3(st.end()) bcz if element is not present its points after last 
    //! element  

    /*Set: [1] [2] [4] [end marker]
                      ↑
                   st.end()*/


//     int cnt = st.count(3); // gives 1 if element is there and 0 if no element is there
//     cout<< cnt<<endl; // returns 0 bcz 3 is not present 

    //* Ways to erase
   // a.> By Direct giving element 
      //    st.erase(2); // erases 2

  // b.> By providing address(iteraor) of element
   // let set = {1,2,3,4,5}
      //   auto it1 = st.find(2);
      //   auto it2 = st.find(4);
      //   st.erase(it1,it2); //returns {1,4,5}

  //? UPPER BOUND and LOWER BOUND  
         set<int> s;
    s.insert(1); // {1}
    s.insert(4); // {1,4}
    s.insert(4); // {1,4}
    s.insert(2); // {1,2,4}
    
//     auto it = s.lower_bound(3); //! lower bound usi elements ka iterator if present either us se just biggeer elemnt ka iterator deta hai
//     cout<< *(it) << endl;
    
    auto it = s.upper_bound(1); //! upper bound hamesha target element se just bigger element ka iterator hi dega present or not 
    cout<<*(it) <<endl;
  

}