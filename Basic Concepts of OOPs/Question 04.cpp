//4. Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference.

#include<iostream>
using namespace std;

//class for circle
class Circle{
	private:
		float redius;                      	
			
	public:
		Circle(float r){      //constructor 
			redius = r;
		}
		
		//object for area of circle
		float area(){
			return 3.14*redius*redius;
		}
		
		//object for circumference of circle
		float circumference(){
			return 2*3.14*redius;
		}
};

int main(){
	float r;     //r=variable for redius
	
	cout<<"Enter Redius : ";
	cin>>r;
	
	Circle c(r);          //c is object of class
	  
	cout<<"Area = "<<c.area()<<endl;        						//function calling    
	cout<<"circumference = "<<c.circumference()<<endl;				//function calling    
}
