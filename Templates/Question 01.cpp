//1. Write a program of to swap the two values using template

#include <iostream>
using namespace std;

// Function template to swap two values of any data type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swap two integer values
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    // Swap two double values
    double a = 3.14, b = 6.28;
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Swap two characters
    char c1 = 'A', c2 = 'B';
    cout << "\nBefore swapping: c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << endl;

}
