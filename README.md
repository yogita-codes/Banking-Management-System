# Banking Management System

A simple **Banking Management System** developed in **C++** to practice and demonstrate Object-Oriented Programming (OOP) concepts.

## About the Project

This project simulates basic banking operations such as managing customer accounts, handling transactions, and maintaining account information. The main goal of this project is to strengthen my understanding of C++ and OOP concepts by building a practical, real-world application.

## OOP Concepts Used

- Classes and Objects
- Encapsulation
- Inheritance
- Abstraction
- Polymorphism
- Constructors
- Access Specifiers
- Function Overriding

## Project Structure

The project is organized into separate classes/files to keep the code modular and easy to maintain. Header files live in `include/`, and implementation files live in `src/`.

```
banking-management-system/
├── include/
│   ├── Customer.h
│   ├── Account.h
│   ├── SavingsAccount.h
│   ├── Current.h
│   └── Transaction.h
├── src/
│   ├── main.cpp
│   ├── Customer.cpp
│   ├── Account.cpp
│   ├── SavingsAccount.cpp
│   ├── Current.cpp
│   └── Transaction.cpp
└── README.md
```

| Class | Description |
|---|---|
| `Customer` | Manages customer-related information |
| `Account` | Represents a bank account and its basic operations |
| `SavingsAccount` | Handles savings account-specific functionality |
| `Current` | Handles current account functionality |
| `Transaction` | Manages banking transactions |

## Technologies Used

- C++
- Object-Oriented Programming
- Git & GitHub

## Getting Started

### Prerequisites

- A C++ compiler (e.g., `g++`)

### Build & Run

Since headers are in `include/` and implementation files are in `src/`, tell `g++` where to find the headers with `-I` and compile all the `.cpp` files together:

```bash
g++ -I include -o banking_system src/*.cpp
./banking_system
```

> Update the file/folder names above if your actual layout differs.

## Purpose

This project is being developed as a learning project to improve my C++ programming skills and gain a better understanding of how OOP concepts can be applied to build a complete application.

## Future Improvements

- [ ] Add persistent data storage
- [ ] Add user authentication
- [ ] Add deposit and withdrawal functionality
- [ ] Add transaction history
- [ ] Improve input validation
- [ ] Add a better console-based user interface

## License

This project is open for learning purposes. Feel free to fork and build on it.
