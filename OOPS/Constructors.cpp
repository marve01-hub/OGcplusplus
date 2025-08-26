#include<iostream>
using namespace std;
class Student{  // Created a NEw data type by me = user defined data type
public:
       string name;
       int rnumber;
       float cgpa;

      Student(){
// this is default constructor which is already present if we have not created constructor 
// but if we have created a constructor then we have to make an empty construtor to initialize the
// attributes if we want to initialize attributes by both ways  
      }

       Student(string s, int r, float g){       // PARAMETERISED CONSTRUCTOR***
            name = s;
            rnumber = r;
            cgpa = g;
       }
};

int main() {
    Student s1("Parteek Marve",1330,8.5);
    s1.rnumber = 2175;
    
    Student s2;
    s2.name = "Parteek Marve";
    s2.rnumber = 1398;
    s2.cgpa = 8.3;
    
    cout<<s1.name<<" "<<s1.rnumber<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rnumber<<" "<<s2.cgpa<<endl;
}