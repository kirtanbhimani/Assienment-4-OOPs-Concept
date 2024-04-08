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
    	readData() {
        	cout << "Enter name: "; cin >> name;
        	cout << "Enter age: "; cin >> age;
    	}
		displayData() {
        	cout << "Name: " << name << "\nAge: " << age << endl;
    	}
};

// Derived class: Student
class Student : public Person {
	protected:
    	double percentage;
	public:
    	readStudentData() {
        	readData();
        	cout << "Enter percentage: "; cin >> percentage;
    	}
    	displayStudentData() {
        	displayData();
        	cout << "Percentage: " << percentage << endl;
    	}
};

// Derived class: Teacher
class Teacher : public Person {
	protected:
    	double salary;
	public:
    	readTeacherData() {
        	readData();
        	cout << "Enter salary: "; cin >> salary;
    	}
    	displayTeacherData() {
        	displayData();
        	cout << "Salary: " << salary << endl;
    	}
};

int main() {
    Student student;
    cout << "Enter student details:\n";
    student.readStudentData();
    cout << "\nStudent details:\n";
    student.displayStudentData();

    cout << endl;

    Teacher teacher;
    cout << "Enter teacher details:\n";
    teacher.readTeacherData();
    cout << "\nTeacher details:\n";
    teacher.displayTeacherData();
}


