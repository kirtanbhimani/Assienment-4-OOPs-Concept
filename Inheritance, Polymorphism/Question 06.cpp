//6. Write a C++ Program to show access to Private Public and Protected 
//   using Inheritance

#include <iostream>
using namespace std;

// Base Class
class Base {
	private:
    	int pvt = 1;
	protected:
    	int prot = 2;
	public:
    	int pub = 3;
    // Function to access private member
    int getPri_num() {
        return pvt;
    }
};

// Derived class inherits from Base class 
class Derived : public Base {
	public:
    	// Function to access protected member from Base
    	int getProt() {
        	return prot;
    	}
};

int main() {
    Derived object1;			//object1 is an object of Derived class
    
    cout << "Private = " << object1.getPri_num() << endl;				//function calling    
    cout << "Protected = " << object1.getProt() << endl;				//function calling    
    cout << "Public = " << object1.pub << endl;							//function calling    
}

