#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;

    Cricketer(string n, int r, float avg){
        name = n;
        runs = r;
        average = avg;
    }    
    void print(int runs) {
        cout<<name << "->" <<this->runs << " " << average << " ";
    }                           // CAN CREATE ANY NUMBER OF FUNCTIONS

    int matches(){
        return runs/average;
    }                 
};

int main(){
    Cricketer c1("Kl Rahul", 9000,45.2);

    c1.print(20000);

    cout<<c1.matches()<<endl;    // cout bcz function ki datatype int hai
}



