//1. Write a program to find the multiplication values and the cubic values
//   using inline function

#include<iostream>
using namespace std;

//inline fun for multiplication
inline int mul(int a,int b){             //mul is for multiplication
	return a * b;
}

//inline fun for cubic valuea
inline int cube(int n){                //cube is for cubic value
	return n * n * n;
}

int main(){
	int num;              //num=number
	
	cout<<"Enter a number : ";
	cin>>num;
	
	cout<<"Multiplication value of "<< num <<"and 2 is: "<<mul(num, 2)<<endl;
    cout<<"Cubic value of "<<num<<" is: "<<cube(num) << endl;
	
}
