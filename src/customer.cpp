#include"../include/customer.h"
#include<iostream>
using namespace std;

Customer::Customer(int Id, string n, int e, string phone){
    customerId = Id;
    name = n;
    email = e;
    phoneNumber = phone;
}
void Customer::displayCustomerInfo() const{
    cout<<"Customer ID: "<<customerId<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Phone Number: "<<phoneNumber<<endl;
}
int Customer::getCustomerId() const{
    return customerId;
}
string Customer::getName() const{
    return name;
}