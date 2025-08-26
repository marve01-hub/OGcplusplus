#include<iostream>
using namespace std;
class Student{  // Created a NEw data type by me = user defined data type
public:
       string name;
       int rnumber;
       float cgpa;
       int age;
      
       Student(string s, int r, float g){       //  CONSTRUCTOR***
            name = s;
            rnumber = r;
            cgpa = g;
       }
};

int main() {
    Student s1("Parteek Marve",1330,8.5);
    
    cout<<s1.name<<" "<<s1.rnumber<<" "<<s1.cgpa<<endl;
}