/*3. Create a class person having members name and age. Derive a class
student having member percentage. Derive another class teacher 
having member salary. Write necessary member function to initialize, 
read and write data. Write also Main function (Multiple Inheritance) */

#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
	protected:
    	string name;
    	int age;
	public:
    	initializeData(string n, int a) {
        	name = n;
        	age = a;
    	}
    	//function for read person data
    	readData() {
        	cout << "Enter name: "; cin >> name;
        	cout << "Enter age: "; cin >> age;
    	}
    	//function for display person data
		displayData() {
        	cout << "Name: " << name << "\nAge: " << age << endl;
    	}
};

// Derived class: Student
class Student : public Person {
	protected:
    	double percentage;
	public:
    	readStudentData() {			//function for read student data
        	readData();
        	cout << "Enter percentage: "; cin >> percentage;
    	}
    	displayStudentData() {		//function for display student data
        	displayData();
        	cout << "Percentage: " << percentage << endl;
    	}
};

// Derived class: Teacher
class Teacher : public Person {
	protected:
    	int salary;
	public:
    	readTeacherData() {			//function for read teacher data
        	readData();
        	cout << "Enter salary: "; cin >> salary;
    	}
    	displayTeacherData() {			//function for display teacher data
        	displayData();
        	cout << "Salary: " << salary << endl;
    	}
};

int main() {
    Student student;							//student is an object of Student
    cout << "Enter student details:\n";
    student.readStudentData();					//function calling
    cout << "\nStudent details:\n";
    student.displayStudentData();				//function calling

    cout << endl;

    Teacher teacher;							//teacher is an object of Teacher
    cout << "Enter teacher details:\n";
    teacher.readTeacherData();					//function calling
    cout << "\nTeacher details:\n";
    teacher.displayTeacherData();				//function calling
}


