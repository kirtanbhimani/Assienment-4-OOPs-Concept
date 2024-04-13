//4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

// Base class: StudentInfo
class StudentInfo {
	protected:
    	string name;
    	int rollNumber;
	public:
    	// Function to initialize student information
    	initializeInfo(string n, int roll) {
        	name = n;
        	rollNumber = roll;
    	}
    	// Function to display student information
    	displayInfo() {
        	cout << "Name: " << name << endl;
        	cout << "Roll Number: " << rollNumber << endl;
    	}
};

// Base class: Marks
class Marks {
	protected:
    	int maths, science, english;
	public:
    	// Function to initialize student marks
    	initializeMarks(int m, int s, int e) {
        	maths = m;
        	science = s;
        	english = e;
    	}
    	// Function to display student marks
    	displayMarks() {
        	cout << "Maths : " << maths << endl;
        	cout << "Science : " << science << endl;
        	cout << "English : " << english << endl;
    	}
};

// Derived class: MarkSheet (inherits from StudentInfo and Marks)
class MarkSheet : public StudentInfo, public Marks {
	public:
    	// Function to display complete mark sheet
    	displayMarkSheet() {
        	cout << "Student Mark Sheet" << endl;
        	cout << "-------------------" << endl;
        	displayInfo(); // Call base class function to display student information
        	displayMarks(); // Call base class function to display student marks
    	}
};

int main() {
    MarkSheet student;					//studant is an object of Marksheet
    student.initializeInfo("Kirtan Bhimani", 121);				//function calling for initialize student information
    student.initializeMarks(86, 71, 78);						//function calling for initialize marks information
    student.displayMarkSheet();									//function calling for display marksheet
}

