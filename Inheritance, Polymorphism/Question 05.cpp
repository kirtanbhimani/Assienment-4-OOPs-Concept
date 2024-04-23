/*5. Assume that the test results of a batch of students are stored in three
different classes. Class Students are storing the roll number. Class Test 
stores the marks obtained in two subjects and class result contains the 
total marks obtained in the test. The class result can inherit the details 
of the marks obtained in the test and roll number of students.
(Multilevel Inheritance)*/

#include <iostream>
using namespace std;

// Base class: Students
class Students {
	protected:
    	int rollNumber;
	public:
    	// Function to set roll number
    	setRollNumber(int roll) {
        	rollNumber = roll;
    	}
    	// Function to display roll number
    	displayRollNumber() {
        	cout << "Roll Number: " << rollNumber << endl;
    	}
};

// Derived class: Test (inherits from Students)
class Test : public Students {
	protected:
    	int maths, science;
	public:
    	// Function to set test marks
    	setTestMarks(int m, int s) {
        	maths = m;
        	science = s;
    	}
    	// Function to display test marks
    	displayTestMarks() {
        	cout << "Maths Marks: " << maths << endl;
        	cout << "Science Marks: " << science << endl;
    	}
};

// Derived class: Result (inherits from Test)
class Result : public Test {
	protected:
    	int total;
	public:
    	// Function to calculate total marks
    	TotalMarks() {
        	total = maths + science;
    	}
    	// Function to display result
    	displayResult() {
        	displayRollNumber();				 // Call base class function to display roll number
        	displayTestMarks();					 // Call base class function to display test marks
        	cout << "Total Marks: " << total << endl;
    	}
};

int main() {
    Result result;										//result is an object of Result
    result.setRollNumber(121);							//set rollnumber
    result.setTestMarks(84, 71);						//set test marks
    result.TotalMarks();								//calculate total marks
    result.displayResult();								//display result
}	

