//5. Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

//class for Rectangle
class Rectangle{
	private:
		float length,width;
		
	public:
		Rectangle(float l,float w){           //constructor
			length = l;
			width = w;
		}
		
		float area(){                        //object for area
			return length * width;
		}
		
		float perimeter(){                   //object for perimeter
			return 2*(length + width);
		}
};

int main(){
	float l,w;             //l=lenght, w=weight
	
	cout<<"Enter Lenght of Rectangle = ";
	cin>>l;
	
	cout<<"Enter Width of Rectangle = ";
	cin>>w;
	
	Rectangle r(l,w);     //r is object of class
	
	cout<<"Area of Rectangle = "<<r.area()<<endl;						//function calling    
	cout<<"Perimeter of Rectangle = "<<r.perimeter()<<endl;				//function calling    
}
