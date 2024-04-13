//2. Write a program of Addition, Subtraction, Division, Multiplication
//   using constructor.

#include<iostream>
using namespace std;

//class for calculator
class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator(int n1, int n2) {                   // Constructor 
        num1 = n1;
        num2 = n2;
    }

    int add() {                              //Addition
        return num1 + num2;
    }

    int sub() {                         //Substraction
        return num1 - num2;
    }

    int mul() {                              //Multiplication 
        return num1 * num2;
    }

    float div() {                         // Divion
        // Check for division by zero
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
        }
        return num1 / num2;
    }
};

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);           //calc is object of Calculator
    
    cout << "Addition: " << calc.add() << endl;					//function calling
    cout << "Subtraction: " << calc.sub() << endl;				//function calling
    cout << "Multiplication: " << calc.mul() << endl;			//function calling
    cout << "Division: " << calc.div() << endl;					//function calling
}

