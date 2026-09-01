#include<iostream>
#include "../include/savingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(int accId, string accHolderName, double balance, double iRate)
    : Account(accId, accHolderName, balance){
        interestRate = iRate;
    }

void SavingsAccount::addInterest() {
    double interest = getBalance() * (interestRate / 100);
    deposit(interest);
}