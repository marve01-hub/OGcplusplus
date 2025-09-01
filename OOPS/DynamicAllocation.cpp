#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;

    Cricketer(string n, int r, float avg){
       this->name = n;
       this->runs = r;
       this->average = avg;
    }       
};

int main(){
    Cricketer c1("Kl Rahul", 9000,45.2);
    Cricketer* c2 = new Cricketer("Virat KOhli",30000,50.3); // dynMIC allocation***
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<< c2->runs<<endl;
    }
