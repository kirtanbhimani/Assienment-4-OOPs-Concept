//2. Define a class to represent a bank account. Include the following members:
// Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account
//=> Member Functions:
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositor_name;
    string account_number;
    string account_type;
    double balance;

public:
    BankAccount(string name, string acc_num, string acc_type) {
        depositor_name = name;
        account_number = acc_num;
        account_type = acc_type;
        balance = 0.0;
    }
    deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }
    withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully." << endl;
        } else {
            cout << "Insufficient funds." << endl;
        }
    }
    display() {
        cout << "Account Holder: " << depositor_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Kirtan Bhimani", "123456789101", "Savings");
    account.deposit(1000);
    account.withdraw(500);
    account.display();

}

