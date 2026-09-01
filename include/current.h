#ifndef CURRENT_H
#define CURRENT_H

#include "account.h"

class CurrentAccount : public Account {
private:
    double overdraftLimit;
public:
    CurrentAccount(int accId, string accHolderName, double balance,double odLimit);
    bool withdraw(double amount);


};

#endif 