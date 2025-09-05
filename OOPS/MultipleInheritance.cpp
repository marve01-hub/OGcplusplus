#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    float average;  
    
    
};

class Engineer{
public:
    int yearsOfExperience;    
    string domain;    
};

class MultiTalanted: public Cricketer, public Engineer{
public:
    string name;
    void changename(string newName){
        name = newName;
    } 
};


int main(){
    MultiTalanted m1;
     m1.name = "Rohit";
    m1.runs = 12000;
    m1.wickets = 8;
    m1.yearsOfExperience = 5;
    m1.domain = "Software";
    cout << m1.name << " has " << m1.runs << " runs, " << m1.wickets << " wickets, "
         << m1.yearsOfExperience << " years exp in " << m1.domain << endl;
    
     m1.changename("Saurabh Netalavalkar");
    cout << m1.name << " has " << m1.runs << " runs, " << m1.wickets << " wickets, "
         << m1.yearsOfExperience << " years exp in " << m1.domain << endl;
     
}



