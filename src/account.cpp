#include "../include/account.h"
#include<iostream>
Account::Account(int accNo , string name , double bal){
    accountNumber = accNo;
    accountHolderName = name;
    balance = bal;
}
void Account::deposit(double amount){
    cout<<amount <<"sucessfully deposited in your account";
    balance += amount;
    cout<<"your current balance is :"<<balance;
}
void Account::withdraw(double amount){
    if(balance < amount){
        cout<<"please enter a valid amount to withdraw";
    }
    else{
        cout<<"withdrawal sucessfull";
        balance -= amount;
        cout<<"your current balance is :"<<balance;
    }
}
double Account::getBalance() const{
    return balance;
}
void Account::displayAccountInfo() const{
    cout<<"Account Information :"<<endl;
    cout<<"Account Number :"<<accountNumber<<endl;
    cout<<"Account Holder Name :"<<accountHolderName<<endl;
    cout<<"Account Balance :"<<balance<<endl;
}
int Account::getAccountNumber() const{
    return accountNumber;
}