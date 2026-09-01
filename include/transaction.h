#ifndef TRANSACTION_H
#define TRANSACTION_H
using namespace std;
#include<string>

class Transaction {
    private:
        int transactionId;
        string transactionType;
        double amount;
        string date;
    public:
        Transaction(int tId, string tType, double amt, string dt);
        void displayTransactionInfo() const;
        int getTransactionId() const;
        string getTransactionType() const;
        double getAmount() const;
};
#endif