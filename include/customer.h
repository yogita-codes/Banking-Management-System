#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
using namespace std;

class Customer{
    private:
        int customerId;
        string name;
        int email;
        string phoneNumber;
    public:
        Customer(int Id, string n, int e, string phone);
        void displayCustomerInfo() const;
        int getCustomerId() const;
        string getName() const;
};
#endif