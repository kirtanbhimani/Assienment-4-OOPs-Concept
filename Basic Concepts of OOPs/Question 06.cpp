//6. Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.

#include<iostream>
using namespace std;

//class for person
class Person{
	private:
		string name,country;
		int age;
		
	public:
		setName(string n){           //set name
			name = n;
		}
		string getName(){            //get name
			return name;
		}
		
		setAge(int a){               //set age
			age = a;
		}
		int getAge(){               //get age
			return age;
		}
		
		setCountry(string c){       //set country name
			country = c;
		}
		string getCountry(){        //get country name
			return country;
		}
};

int main (){
	Person p;      //p=object of Person
	
	p.setName("Kirtan Bhimani");
	p.setAge(21);
	p.setCountry("Bharat");
	
	cout<<"Name : "<<p.getName()<<endl;				//function calling
	cout<<"Age : "<<p.getAge()<<endl;				//function calling
	cout<<"Country : "<<p.getCountry()<<endl;		//function calling
}
