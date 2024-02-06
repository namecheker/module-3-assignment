//  2. Define a class to represent a bank account. Include the following members:



#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    long long accountNumber;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, long long number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 123456789, 1000.0);

    // Displaying initial account details
    myAccount.displayAccountDetails();

    // Depositing and withdrawing money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying updated account details
    myAccount.displayAccountDetails();

   
}
