//6. Write a C++ program to implement a class called Employee that has
//   private member variables for name, employee ID, and salary. Include
//   member functions to calculate and set salary based on employee
//   performance. Using of constructor

#include<iostream>
using namespace std;

//class for Employee
class Employee{
	private:
		string name;
		int id;
		double salary;
		
	public:
		//Constructor
		Employee(string Name, int Id, double Salary){
			name = Name;
			id = Id;
			salary = Salary;
		}
		
		//to set salary based on performance
		setSalary(double performance){
			salary *= performance;
		}
		
		//to get informantion after performance 
		getInfo(){
			cout<< "Employee Name : "<< name << endl;
			cout<< "Employee Id : "<< id << endl;
			cout<< "Employee Salary : Rs. "<< salary << endl;
		}
};

int main(){
	Employee employee("Kirtan Bhimani",121,45000.0);    //object of Employee
	
	cout<<"Employee Information Before Performance..."<<endl;             
	employee.getInfo();					//function calling
	
	employee.setSalary(2.0);  		   //performance increce 20% by factor of 2.0
	
	cout<<"\nEmployee Information After Performance..."<<endl;
	employee.getInfo();				   //function calling
	
		
	
}

