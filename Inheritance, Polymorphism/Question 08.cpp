/* 8. Write a program to Mathematic operation like Addition, Subtraction,
	  Multiplication, Division Of two number using different parameters and
	  Function Overloading*/

#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to subtract two floats
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}

// Function to multiply two floats
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two integers
float divide(int a, int b) {
    if (b != 0)
        return static_cast<float>(a) / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0.0f; // Default return if division by zero occurs
    }
}

// Function to divide two floats
float divide(float a, float b) {
    if (b != 0.0f)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0.0f; // Default return if division by zero occurs
    }
}

int main() {
    int intNum1 = 20, intNum2 = 5;
    float floatNum1 = 10.5f, floatNum2 = 2.5f;

    // Addition
    cout << "Integer Addition: " << add(intNum1, intNum2) << endl;
    cout << "Float Addition: " << add(floatNum1, floatNum2) << endl;
	cout<<"\n";
    // Subtraction
    cout << "Integer Subtraction: " << subtract(intNum1, intNum2) << endl;
    cout << "Float Subtraction: " << subtract(floatNum1, floatNum2) << endl;
	cout<<"\n";
    // Multiplication
    cout << "Integer Multiplication: " << multiply(intNum1, intNum2) << endl;
    cout << "Float Multiplication: " << multiply(floatNum1, floatNum2) << endl;
	cout<<"\n";
    // Division
    cout << "Integer Division: " << divide(intNum1, intNum2) << endl;
    cout << "Float Division: " << divide(floatNum1, floatNum2) << endl;

}

