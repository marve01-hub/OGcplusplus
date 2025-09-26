//! SET = SORTED(ascending orer ) + UNIQUE(stores only 1 value of same thing)
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> st;
    st.insert(1); // {1}
    st.insert(4); // {1,4}
    st.insert(4); // {1,4}
    st.insert(2); // {1,2,4}

    auto it = st.find(5); //! find() -> returns iterator - points to element location
    cout << *it<<endl; //! Returns 3(st.end()) bcz if element is not present its points towards last 
    //! position and the 3 givesn is a garbage value bcz 

    /*Set: [1] [2] [4] [end marker]
                      ↑
                   st.end()*/


    int cnt = st.count(3); // gives 1 if element is there and 0 if no element is there
    cout<< cnt; // returns 0 bcz 3 is not present 

    //* Ways to erase
   // a.> By Direct giving element 
         st.erase(2); // erases 2

  // b.> By providing address(iteraor) of element
   // let set = {1,2,3,4,5}
        auto it1 = st.find(2);
        auto it2 = st.find(4);
        st.erase(it1,it2); //returns {1,4,5}

  //? UPPER BOUND and LOWER BOUND  
      
      

}