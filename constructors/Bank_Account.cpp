#include <bits/stdc++.h>
using namespace std;

class BankAccount{
        private:
        string accountNumber;
        double balance;
    public:
        //constructor
        BankAccount(string accountNumber,double balance){
            this->accountNumber=accountNumber;
            this->balance=balance;
        }
        void deposit(double amount){
            balance+=amount;
        }
        bool withdraw(double amount){
            if(amount<=balance){
                balance-=amount;
                return true;
            }
            cout << "Insufficient funds!" << endl;
            return false;
        }
        void displayDetails(){
            cout << fixed << setprecision(2);
           cout << "Account Number : " << accountNumber << endl;
           cout << "Balance : " << balance << endl;  }
}