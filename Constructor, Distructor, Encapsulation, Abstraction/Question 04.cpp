//4. Write a C++ program to implement a class called Bank Account that has
//   private member variables for account number and balance. Include
//   member functions to deposit and withdraw money from the account.

#include<iostream>
using namespace std;

//class for Bank Account
class Bankaccount {
	private:
    	int accountnumber;
    	double balance;

	public:
    	// Constructor
    	Bankaccount(int accnum, double initialbalance) {
        	accountnumber = accnum;
        	balance = initialbalance;
    	}
	    // Member function to deposit money
    	deposit(double amount) {
        	balance += amount;
        	cout << "Deposited Rs." << amount << " into account " << accountnumber << endl;
    	}
    	
		// Member function to withdraw money
    	withdraw(double amount) {
        	if (balance >= amount) {
        	    balance -= amount;
            	cout << "Withdrawn Rs." << amount << " from account " << accountnumber << endl;
        	} else {
            	cout << "Insufficient funds to withdraw Rs." << amount << " from account " << accountnumber << endl;
        	}
    	}
    	
    	// Member function to check balance
    	checkbalance() {
        	cout << "Account " << accountnumber << " has a balance of Rs." << balance << endl;
    	}

};

int main(){
	Bankaccount account1(344484, 1000.0);		//account1 is an object
	
	//calling function deposite,withdraw and balance chacking
	account1.deposit(500.0);
	account1.checkbalance();
	
	account1.withdraw(250.0);
	account1.checkbalance();
	
	account1.withdraw(15000.0);
	account1.checkbalance();
	
}
