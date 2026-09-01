#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include"../include/account.h"

class SavingsAccount : public Account {

    private:
        double interestRate;
    public:
        SavingsAccount(int accId, string accHolderName, double balance, double iRate);
        void addInterest();
};
#endif