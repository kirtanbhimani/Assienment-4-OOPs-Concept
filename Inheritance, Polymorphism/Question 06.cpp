//6. Write a C++ Program to show access to Private Public and Protected 
//   using Inheritance

#include <iostream>
using namespace std;

// Base class
class Base {
	private:
    	int privateVarBase;
	protected:
    	int protectedVarBase;
	public:
    	int publicVarBase;

    // Constructor to initialize variables
    Base() : privateVarBase(1), protectedVarBase(2), publicVarBase(3) {}

    // Function to display values of variables
    display() {
        cout << "Private variable in Base class: " << privateVarBase << endl;
        cout << "Protected variable in Base class: " << protectedVarBase << endl;
        cout << "Public variable in Base class: " << publicVarBase << endl;
    }
};

// Derived class
class Derived : public Base {
	public:
    	// Function to access Base class variables
    accessBaseVariables() {
        // Accessing public variable of Base class
        cout << "Public variable in Derived class: " << publicVarBase << endl;

        // Accessing protected variable of Base class
        cout << "Protected variable in Derived class: " << protectedVarBase << endl;

        // Private members of the base class cannot be accessed directly from derived class
        // cout << "Private variable in Derived class: " << privateVarBase << endl;
    }
};

int main() {
    Derived obj;
    obj.accessBaseVariables();

    // Accessing public variable of Base class from Main
    cout << "Public variable in Main: " << obj.publicVarBase << endl;

    // Protected and private members of the base class cannot be accessed from Main
    // cout << "Protected variable in Main: " << obj.protectedVarBase << endl;
    // cout << "Private variable in Main: " << obj.privateVarBase << endl;
}

