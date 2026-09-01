#include"../include/transaction.h"
#include<iostream>
using namespace std;

Transaction::Transaction(int tId, string tType, double amt, string dt){
    transactionId = tId;
    transactionType = tType;
    amount = amt;
    date = dt;
}

void Transaction::displayTransactionInfo() const{
    cout<<"Transaction ID: "<<transactionId<<endl;
    cout<<"Transaction Type: "<<transactionType<<endl;
    cout<<"Amount: "<<amount<<endl;
    cout<<"Date: "<<date<<endl;
}

int Transaction::getTransactionId() const{
    return transactionId;
}

string Transaction::getTransactionType() const{
    return transactionType;
}

double Transaction::getAmount() const{
    return amount;
}