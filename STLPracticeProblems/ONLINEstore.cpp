#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<deque>
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<ctime>  //! NEW --> TIME VGERA CAPTURE KARNE KE LIYE AT ANY PARTICUALR MOMENT
using namespace std;

struct Product{   //! CUSTOMIZED DATASTRUCTURE
    int productID;
    string name;
    string categoty;
};

struct Order{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate; //! from ctime header file
};

int main(){
    vector<Product> products = {  //! ***User defined data structure's VECTOR **** should follow acc to made data structure
        {101,"Laptop","Electronic"},
        {102,"LED","Electronic",},
        {103,"Blender","Kitchen"},
        {104,"Gaschulha","Kitchen"},
        {105,"Lamp","Work"},  
     //* As categories are repeating therefore we use SET   
    };

    list<Order> orderHistory;
    orderHistory.push_back({1,101,1,"c001",time(0)}); //! time(0) means current time
    orderHistory.push_back({2,102,1,"c002",time(0)});
    orderHistory.push_back({3,104,1,"c003",time(0)});

    set<string> categories;
    for(auto &Product: products){
        categories.insert(Product.categoty);  //* inserts unique elements **** ISKA USE KARKE HAM categoriy mai loop kar pa rhe hain
//       jiske 
//      andar data
//      insert krna
//        hai
    }

    map<int, int> productSotck = {
        {101,5},  // is product ke etne pieces bache
        {102,23},
        {103,28},
        {104,14},
        {105,8}
    };

    unordered_map<string, string> CustomerData = {
        {"c001","dqd"},
        {"c002","ewda"},
        {"c003","ut"},
        {"c003","efr"},
        {"c005","yju"},
    };

    unordered_set<int> uniqueProductID;  //! sorted matlab product ke no. of orders ke hisab se
    for(const auto &Product: products){
        uniqueProductID.insert(Product.productID);
    } 
     
    for(int productID : uniqueProductID){
         cout<< productID<< " ";
    }
    cout<<endl; 
    for(const auto &Order: orderHistory){
         cout << "Order ID: " << Order.orderID << endl;
         cout << "Product ID: " << Order.ProductID << endl;
         cout << "Quantity: " << Order.quantity << endl;
         cout << "Customer ID: " << Order.customerID << endl;
         cout << "Time: " << ctime(&Order.orderDate); // ctime converts time_t to readable forma
    }
}