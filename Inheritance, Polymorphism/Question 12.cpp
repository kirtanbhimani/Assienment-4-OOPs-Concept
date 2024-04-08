/* 12.Write a program to swap the two numbers using friend
	functionwithout using third variable 
*/

#include <iostream>
using namespace std;

// Forward declaration of the class
class Number;

// Declaration of the friend function for swapping numbers
void swapNumbers(Number&, Number&);

// Class representing a number
class Number {
	private:
    	int num;
	public:
    	// Constructor to initialize the number
    	Number(int n) : num(n) {}

    	// Getter function to access the number
    	int getNum() {
        	return num;
    	}

    	// Friend declaration for the swap function
    	friend void swapNumbers(Number&, Number&);
};

// Function definition to swap numbers without using a third variable
void swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main() {
    // Initialize two numbers
    Number num1(5);
    Number num2(10);

    // Display original numbers
    cout << "Original Numbers:" << endl;
    cout << "Number 1: " << num1.getNum() << endl;
    cout << "Number 2: " << num2.getNum() << endl;

    // Swap numbers using the friend function
    swapNumbers(num1, num2);

    // Display swapped numbers
    cout << "\nSwapped Numbers:" << endl;
    cout << "Number 1: " << num1.getNum() << endl;
    cout << "Number 2: " << num2.getNum() << endl;
}

