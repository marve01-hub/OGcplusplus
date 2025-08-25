#include<iostream>
using namespace std;
class Student{  // Created a NEw data type by me = user defined data type
public:
       string name;
       int rnumber;
       float cgpa;
       int age; 
};
int main() {
    Student s1;  // DECLARATION
    s1.name = "Parteek Marve";   //  WAY TO INITIALIZAION
    // s1.rnumber = 1330;           //INITIALIZAION
    s1.cgpa = 8.5;              //INITIALIZAION
    cin>>s1.rnumber;            // BY taking input

    Student s2;
    s2.name = "Parteek Marve";
    // s2.rnumber = 1330;
    s2.cgpa = 8.5;
    cin>>s2.rnumber;
    cout<<s1.name<<" "<<s1.rnumber<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rnumber<<" "<<s2.cgpa;
}