//5. Write a C++ program to create a class called Triangle that has private
//   member variables for the lengths of its three sides. Implement member
//   functions to determine if the triangle is equilateral, isosceles, or scalene

#include<iostream>
using namespace std;

//class for Triangle
class Triangle{
	private:
		double side1,side2,side3;
		
	public:
		//constructor
		Triangle(double s1, double s2, double s3){
			side1 = s1;
			side2 = s2;
			side3 = s3;
		}
		// Member function to check if the triangle is equilateral
    	isEquilateral(){
        	return side1 == side2 && side2 == side3;
    	}

    	// Member function to check if the triangle is isosceles
    	isIsosceles(){
        	return side1 == side2 || side1 == side3 || side2 == side3;
    	}
    	
    	// Member function to check if the triangle is scalene
    	isScalene(){
        	return !isEquilateral() && !isIsosceles();
    	}
};

int main(){
	
	//Triangle object is triangle
	Triangle triangle1(5.0, 5.0, 5.0);   // for Equilateral Triangle
	Triangle triangle2(5.0, 3.0, 5.0);   // for Isosceles Triangle
	Triangle triangle3(1.0, 3.0, 5.0);   // for Scalene Triangle
	
	//for triangle 1
	cout<<"Triangle 1 is ";
	if (triangle1.isEquilateral()){
		cout<<"Equilateral Triangle..."<<endl;
	}
	else if(triangle1.isIsosceles()){
		cout<<"Isosceles Triangle..."<<endl;
	}
	else{
		cout<<"Scalene Triangle..."<<endl;
	}
	
	//for triangle 2
	cout<<"Triangle 2 is ";
	if (triangle2.isEquilateral()){
		cout<<"Equilateral Triangle..."<<endl;
	}
	else if(triangle2.isIsosceles()){
		cout<<"Isosceles Triangle..."<<endl;
	}
	else{
		cout<<"Scalene Triangle..."<<endl;
	}
	
	//for triangle 3	
	cout<<"Triangle 3 is ";
	if (triangle3.isEquilateral()){
		cout<<"Equilateral Triangle..."<<endl;
	}
	else if(triangle3.isIsosceles()){
		cout<<"Isosceles Triangle..."<<endl;
	}
	else{
		cout<<"Scalene Triangle..."<<endl;
	}
}
