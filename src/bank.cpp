#include "../include/bank.h"
#include<iostream>
using namespace std;

#include "../include/bank.h"
#include <iostream>

using namespace std;

void Bank::run() {

    int choice;

    do {
        cout << "\n========== BANK MANAGEMENT SYSTEM ==========\n";
        cout << "1. Create Customer\n";
        cout << "2. Create Account\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Transfer Money\n";
        cout << "6. Show Account\n";
        cout << "7. Show Transactions\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                createCustomer();
                break;

            case 2:
                createAccount();
                break;

            case 3:
                deposit();
                break;

            case 4:
                withdraw();
                break;

            case 5:
                transfer();
                break;

            case 6:
                showAccount();
                break;

            case 7:
                showTransactions();
                break;

            case 0:
                cout << "Thank you for using our bank!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);
}

void Bank::createCustomer() {

    int id;
    string name;
    string email;
    string phone;

    cout << "\nEnter Customer ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Phone: ";
    getline(cin, phone);

    cout << "Enter Email: ";
    getline(cin, email);

    Customer customer(id, name, phone, email);

    customers.push_back(customer);

    cout << "\nCustomer created successfully!\n";
}