//6. Write a C++ Program to show access to Private Public and Protected 
//   using Inheritance

#include <iostream>
using namespace std;

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

class Derived : public Base {
	public:
    	// Function to access protected member from Base
    	int getProt() {
        	return prot;
    	}
};

int main() {
    Derived object1;
    cout << "Private = " << object1.getPri_num() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
}

