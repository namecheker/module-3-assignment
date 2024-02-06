/*3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account */




#include<iostream>
#include<string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    long long accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(string name, long long number, string type, double initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
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
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating a BankAccount object
    BankAccount myAccount("John Doe", 123456789, "Savings", 1000.0);

    // Displaying initial account details
    myAccount.displayAccountDetails();

    // Depositing and withdrawing money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Displaying updated account details
    myAccount.displayAccountDetails();

    
}

