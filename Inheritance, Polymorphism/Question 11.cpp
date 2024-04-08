/* 11.Write a program to calculate the area of circle, rectangle and
		triangle using Function Overloading
		Rectangle: Area * breadth
		Triangle: ½ *Area*
		breadthCircle: Pi * Area
		*Area 
*/

#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    // Calculate and display the area of a circle with radius 5
    double circleArea = calculateArea(5.0);
    cout << "Area of circle with radius 5: " << circleArea << endl;

    // Calculate and display the area of a rectangle with length 4 and breadth 6
    double rectangleArea = calculateArea(4.0, 6.0);
    cout << "Area of rectangle with length 4 and breadth 6: " << rectangleArea << endl;

    // Calculate and display the area of a triangle with base 3 and height 8
    double triangleArea = calculateArea(3.0, 8.0, 't');
    cout << "Area of triangle with base 3 and height 8: " << triangleArea << endl;

}
