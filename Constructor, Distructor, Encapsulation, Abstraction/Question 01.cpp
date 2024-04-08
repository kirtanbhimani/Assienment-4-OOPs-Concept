//1. Write a program to find the multiplication values and the cubic values
//   using inline function

#include<iostream>
using namespace std;

inline int mul(int a,int b){             //mul=multiplication
	return a * b;
}

inline int cube(int n){
	return n * n * n;
}

int main(){
	int num;
	
	cout<<"Enter a number : ";
	cin>>num;
	
	cout<<"Multiplication value of "<< num <<"and 2 is: "<<mul(num, 2)<<endl;
    cout<<"Cubic value of "<<num<<" is: "<<cube(num) << endl;
	
}
