//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;

class Addition{
	public:
		sum(){
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

class Substraction{
	public:
		sub(){
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

class Multiplication{
	public:
		mul(){
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

class Division{
	public:
		div(){
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

