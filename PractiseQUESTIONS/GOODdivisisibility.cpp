#include<iostream>
using namespace std;

int main() {
    int number;

    cin>>number;
    for(int i=0;i<=100;i++){
        if(number%3==0){
            cout<<"Fizz";
            break;
        }
        if(number%5==0){
            cout<<"Buzz";
            break;
        }
        if(number%3==0 and number%5==0)
        cout<<"FizzBuzz";
        break;
        }
        
    }
