#include"../include/current.h"
#include<iostream>
using namespace std;

CurrentAccount::CurrentAccount(int accId, string accHolderName, double balance, double odLimit)
    : Account(accId, accHolderName, balance) {
    overdraftLimit = odLimit;
}

bool CurrentAccount::withdraw(double amount) {
    if (amount <= getBalance() + overdraftLimit) {
        Account::withdraw(amount);
        return true;
    }
    return false;
}