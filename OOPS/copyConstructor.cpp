#include<iostream>
using namespace std;
class Student{  // Created a NEw data type by me = user defined data type
public:
       string name;
       int rnumber;
       float cgpa;

       Student(string s, int r, float g){       // PARAMETERISED CONSTRUCTOR***
            name = s;
            rnumber = r;
            cgpa = g;
       }
};

int main() {
    Student s1("Parteek Marve",1330,8.5);
    s1.rnumber = 2175;
    
    Student s2 = s1;
    s2.name = "Santosh ji"; // DEEP COPY - bcz it updates name in output

    Student s3(s2);  // COPY CONSTRUCTOR*
    s3.cgpa = 9.4;   // deep copy
    
    cout<<s1.name<<" "<<s1.rnumber<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rnumber<<" "<<s2.cgpa<<endl;
    cout<<s3.name<<" "<<s3.rnumber<<" "<<s3.cgpa<<endl;

}