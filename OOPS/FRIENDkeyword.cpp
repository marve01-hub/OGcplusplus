#include<iostream>
using namespace std;
class Milk{
private:
        string milkname;
        int serevings;

public:
        Milk(string name, int serve): milkname(name),serevings(serve){}  //! NEW WAY TO DECLARE A CONSTRUCTOR*

        friend bool compareServings(){
            
        }
        void display() const {   //! used const so that value change na ho paye
            cout<<"Milk name: "<< milkname<<endl;
        }
};
int main(){
    Milk KesarMilk("Kesar Milk",4);
    Milk RuhabzaMilk("Cold Milk",6);

}