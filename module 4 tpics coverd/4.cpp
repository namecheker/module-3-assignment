/* 4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account  */

#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the member variables
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cerr << "Invalid deposit amount. Amount must be greater than 0." << std::endl;
        }
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else if (amount <= 0) {
            std::cerr << "Invalid withdrawal amount. Amount must be greater than 0." << std::endl;
        } else {
            std::cerr << "Insufficient funds. Withdrawal not allowed." << std::endl;
        }
    }

    // Member function to get the account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Member function to get the account balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount(123456, 1000.0);

    // Display initial account information
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    // Deposit money into the account
    myAccount.deposit(500.0);

    // Withdraw money from the account
    myAccount.withdraw(200.0);

    // Attempt to withdraw more than the balance
    myAccount.withdraw(1000.0);

    
}
