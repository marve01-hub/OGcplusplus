#include<iostream>
using namespace std;
class BankAccount{
private:    
    int accountNumber;
    int balance;
    string accountHolderName;
public:
    BankAccount(int accountNumber, string accountHolderName,int balance){
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    void deposit(float amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposite : $ " << endl;
           // balance = amount; !! THIS WILL CHANGE CURRNT BALANCE TO AMOUNT DEPOSITED !! WRONG
        }
        else cout<<"Invalid amount. Please enter a positive amount."<<endl;
    }
    void withdraw(int amount){
        if(amount > 0 and amount <= balance){
            balance -= amount;
            cout << "Withdrawal : $ " << amount << endl;
    }
        else if(amount < 0 ){
            cout<<"Invalid amount"<<endl;
        } 
    }

    void displayBalance() {
    cout << "Account Holder: " << accountHolderName << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: " << balance << endl;
    }

};
int main(){
    BankAccount b1(424242,"Santosh Kumari",200000);
    b1.displayBalance();
    b1.deposit(2500);
    b1.displayBalance();
    b1.withdraw(5000);
    b1.displayBalance();
    return 0;
}