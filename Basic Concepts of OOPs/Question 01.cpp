//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;

//class for Addition
class Addition{
	public:
		sum(){                              //sum is object
			int a,b,sum;
			cout<<"Addition"<<endl;
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
			sum = a + b ;
			cout<<"Addition of a and b = "<<sum<<endl;
		}
};

//class for Substraction
class Substraction{
	public:
		sub(){                               //sub is object
			int a,b,sub;
			cout<<"\nSubstraction"<<endl;
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
			sub = a - b ;
			cout<<"Substraction of a and b = "<<sub<<endl;
		}
};

//class for Multiplication
class Multiplication{
	public:
		mul(){                           //mul is object
			int a,b,mul;
			cout<<"\nMultiplication"<<endl;
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
			mul = a * b ;
			cout<<"Multiplication of a and b = "<<mul<<endl;
		}
	
};

//class for Division
class Division{
	public:
		div(){                            //div is object
			int a,b,div;
			cout<<"\nDivision"<<endl;
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"Enter value of b : ";
			cin>>b;
			div = a / b ;
			cout<<"Division of a and b = "<<div<<endl;
		}
};

main(){
	Addition obj;
	obj.sum();
	
	Substraction obj1;
	obj1.sub();
	
	Multiplication obj2;
	obj2.mul();
	
	Division obj3;
	obj3.div();
}

