//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>
using namespace std;

class Circle{
	private:
		float redius;                      	
			
	public:
		Circle(float r){      //constructor 
			redius = r;
		}
		
		float area(){
			return 3.14*redius*redius;
		}
		float circumference(){
			return 2*3.14*redius;
		}
};

int main(){
	float r;
	
	cout<<"Enter Redius : ";
	cin>>r;
	
	Circle c(r);          //c is object of class
	  
	cout<<"Area = "<<c.area()<<endl;
	cout<<"circumference = "<<c.circumference()<<endl;
}
