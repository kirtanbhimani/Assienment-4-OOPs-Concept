//2. Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() = 0; // Virtual function for calculating area
};

// Derived class Rectangle inherits from Shape
class Rectangle : public Shape {
	protected:
    	double length;
    	double width;

	public:
    	// Constructor
    	Rectangle(double l, double w) {
			length = l;
			width = w;
		}

	    // Function to calculate area of rectangle
    	double area(){
        	return length * width;
    	}
};

int main() {
    double length, width;

    // Input length and width of rectangle
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rectangle(length, width);

    // Calculate and display area of rectangle
    cout << "Area of rectangle: " << rectangle.area() << endl;
}

