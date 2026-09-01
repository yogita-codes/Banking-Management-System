#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
using namespace std;

class Account {
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    Account(int accNo , string name , double bal);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    void displayAccountInfo() const;
    int getAccountNumber() const;
};

#endif