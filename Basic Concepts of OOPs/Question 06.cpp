//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;

class Person{
	private:
		string name,country;
		int age;
		
	public:
		setName(string n){
			name = n;
		}
		string getName(){
			return name;
		}
		
		setAge(int a){
			age = a;
		}
		int getAge(){
			return age;
		}
		
		setCountry(string c){
			country = c;
		}
		string getCountry(){
			return country;
		}
};

int main (){
	Person p;      //p=object of Person
	
	p.setName("Kirtan Bhimani");
	p.setAge(21);
	p.setCountry("Bharat");
	
	cout<<"Name : "<<p.getName()<<endl;
	cout<<"Age : "<<p.getAge()<<endl;
	cout<<"Country : "<<p.getCountry()<<endl;
}
