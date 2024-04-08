/*
13.Write a program to find the max number from given two
numbersusing friend function
*/

#include <iostream>
using namespace std;

// Forward declaration of the class
class Number;

// Declaration of the friend function to find the maximum number
void findMax(const Number&, const Number&);

// Class representing a number
class Number {
	private:
    	int num;
	public:
    	// Constructor to initialize the number
    	Number(int n) : num(n) {}

    	// Getter function to access the number
    	int getNum() const {
        	return num;
    	}

    	// Friend declaration for the findMax function
    	friend void findMax(const Number&, const Number&);
};

// Function definition to find the maximum number
void findMax(const Number& num1, const Number& num2) {
    if (num1.num > num2.num)
        cout << "Maximum number is: " << num1.num << endl;
    else
        cout << "Maximum number is: " << num2.num << endl;
}

int main() {
    // Initialize two numbers
    Number num1(10);
    Number num2(20);

    // Find and display the maximum number using the friend function
    findMax(num1, num2);

}

