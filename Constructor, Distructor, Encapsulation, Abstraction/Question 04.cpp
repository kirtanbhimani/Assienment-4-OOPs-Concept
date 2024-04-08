//4. Write a C++ program to implement a class called Bank Account that has
//   private member variables for account number and balance. Include
//   member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;

class BankAccount {
	private:
    	int accountNumber;
    	double balance;

	public:
    	// Constructor
    	BankAccount(int accNum, double initialBalance) {
        	accountNumber = accNum;
        	balance = initialBalance;
    	}
	     // Member function to deposit money
    	deposit(double amount) {
        	balance += amount;
        	cout << "Deposited Rs." << amount << " into account " << accountNumber << endl;
    	}
    	
		// Member function to withdraw money
    	withdraw(double amount) {
        	if (balance >= amount) {
        	    balance -= amount;
            	cout << "Withdrawn Rs." << amount << " from account " << accountNumber << endl;
        	} else {
            	cout << "Insufficient funds to withdraw Rs." << amount << " from account " << accountNumber << endl;
        	}
    	}
    	
    	// Member function to check balance
    	checkBalance() {
        	cout << "Account " << accountNumber << " has a balance of Rs." << balance << endl;
    	}

};

int main(){
	BankAccount account1(344484, 1000.0);
	
	account1.deposit(500.0);
	account1.checkBalance();
	
	account1.withdraw(250.0);
	account1.checkBalance();
	
	account1.withdraw(15000.0);
	account1.checkBalance();
	
}
