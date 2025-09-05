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
    void change(Cricketer* c){
        c->runs = 54355;  // = (*c).run = 54355;
    }
           
int main(){
    /* `Cricketer c1` is creating an object of the class `Cricketer` named `c1` with the values "Kl
    Rahul" for name, 9000 for runs, and 45.2 for average. */
    Cricketer c1("Kl Rahul", 9000,45.2);
    // cout<<c1.runs<<endl;
    // change(&c1);
    // cout<<c1.runs<<endl;

     Cricketer* p1 = &c1; // p1 ke andar c1 ka address store hua jis se voh c1 ki values ko control kar skta hai = *p1 = c1
     cout<<p1->runs<<endl; // = (*c1).runs
    //  cout<<p1->runs<<endl; // changed value of runsp1->runs = 18094; // (*p1).runs = 18094; - updatio  cout<<p1->runs<<endl; // cout<<(*p1).runs<<endl; 
     p1-> runs = 87345;
     cout<<p1->runs;
    }





