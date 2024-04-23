//7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

// Base class
class A {
public:
    int a;
    getA_data() {                  //get the data of A
        cout << "Enter value of a: ";
        cin >> a;
    }
};

// Derived class B inherits from class A
class B : public A {
public:
    int b;
    getB_data() {                  //get the data of B
        cout << "Enter value of b: ";
        cin >> b;
    }
};

// Derived class C inherits from class B
class C : public B {
private:
    int c;
public:
    getC_data() {                  //get the data of C
        cout << "Enter value of c: ";
        cin >> c;
    }

    // Function to print the sum
    sum() {
        int Total = a + b + c;
        cout << "Sum: " << Total;
    }
};

int main() {
    // Create an object of subclass C
    C obj;							//obj is an object of C class 
    
    obj.getA_data();				//function calling    
    obj.getB_data();				//function calling    
    obj.getC_data();				//function calling    
    obj.sum();						//function calling    
}

