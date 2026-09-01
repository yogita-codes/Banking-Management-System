#ifndef BANK_H
#define BANK_H

#include <vector>
#include "customer.h"
#include "account.h"
#include "transaction.h"

using namespace std;

class Bank {
private:
    vector<Customer> customers;
    vector<Account*> accounts;
    vector<Transaction> transactions;

public:
    void createCustomer();
    void createAccount();

    void deposit();
    void withdraw();
    void transfer();

    void showAccount();
    void showTransactions();

    void run();
};

#endif