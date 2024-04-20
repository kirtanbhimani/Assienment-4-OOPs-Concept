/* 8. Write a program to Mathematic operation like Addition, Subtraction,
	  Multiplication, Division Of two number using different parameters and
	  Function Overloading*/

#include <iostream>
using namespace std;

class MathOperations {
public:
    // Function to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Function to subtract two numbers
    int sub(int a, int b) {
        return a - b;
    }

    // Function to multiply two numbers
    int mul(int a, int b) {
        return a * b;
    }

    // Function to divide two numbers
    double div(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    MathOperations mathOps;

    // Example 
    int num1 = 10, num2 = 5;
    cout << "Addition: " << mathOps.add(num1, num2) << endl;
    cout << "Subtraction: " << mathOps.sub(num1, num2) << endl;
    cout << "Multiplication: " << mathOps.mul(num1, num2) << endl;
    cout << "Division: " << mathOps.div(num1, num2) << endl;
}

