#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //* PAIRS

   /*
   pair<int, int> p = {1, 3};  //! initializing
    cout << p.first << " " << p.second << endl; //! output
   */ 

   //* NESTED PAIRS(pair of pair)

   /*pair<int, pair<int, int>> p = {1,   {3,     4}};
                           //     1st 2nd1st 2nd2nd      
   cout << p.first << " " << p.second.first << " " << p.second.second << endl;*/

    //* ARRAY PAIRS

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;  //! output 4
    


    return 0;
}