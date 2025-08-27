#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string n, int r){
        name = n;
        runs = r;
    }
    /*Cricketer(string name, int runs){   but if
        name = name;
        runs = runs;       will not give proper output just gives garbage values
    }*/                 
};

int main(){
    Cricketer c1("Kl Rahul", 9000);

    cout<< c1.name << " " << c1.runs << endl;
}



