//1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

// Function template to swap two numbers
template <class T>
swap_numbers(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
   
    //for int numbers
    cout << "Before swapping: x = " << x << ", y = " << y << endl;			
    swap_numbers(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

	cout<<endl;
	//for double numbers
    double p = 3.14, q = 2.71;
    cout << "Before swapping: p = " << p << ", q = " << q << endl;
    swap_numbers(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;
}

