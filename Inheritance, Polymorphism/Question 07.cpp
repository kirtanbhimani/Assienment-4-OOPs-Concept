//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

// Base class
class Base {
	protected:
    	int baseVar; // Variable to store data
	public:
    	// Parameterized constructor for Base class
    	Base(int val) : baseVar(val) {
        	cout << "Base class constructor called" << endl; // Display a message when constructor is called
    	}

    	// Function to display base variable
    	displayBaseVar() {
        	cout << "Base variable: " << baseVar << endl; // Display base variable
    	}
};

// Derived class
class Derived : public Base {
	protected:
    	int derivedVar; // Variable to store data
	public:
    	// Parameterized constructor for Derived class
    	Derived(int val1, int val2) : Base(val1), derivedVar(val2) {
        	cout << "Derived class constructor called" << endl; // Display a message when constructor is called
    	}

    	// Function to display derived variable
    displayDerivedVar() {
        cout << "Derived variable: " << derivedVar << endl; // Display derived variable
    }
};

// Further derived class
class FurtherDerived : public Derived {
public:
    // Parameterized constructor for FurtherDerived class
    FurtherDerived(int val1, int val2, int val3) : Derived(val1, val2) {
        cout << "FurtherDerived class constructor called" << endl; // Display a message when constructor is called
        cout << "Additional variable: " << val3 << endl; // Display additional variable
    }
};

int main() {
    // Create an object of FurtherDerived class with parameters
    FurtherDerived obj(10, 20, 30);

    // Call member function to display base variable
    obj.displayBaseVar();

    // Call member function to display derived variable
    obj.displayDerivedVar();
}


