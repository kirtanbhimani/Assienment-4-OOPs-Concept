/* 1. Assume a class cricketer is declared. Declare a derived class batsman 
from cricketer. Data member of batsman. Total runs, Average runs and 
best performance. Member functions input data, calculate average 
runs, Displaydata.(Single Inheritance)*/

#include<iostream>
using namespace std;

//class for cricketer
class Cricketer {
	protected:
    	string name;
    	int age;
	public:
    // Function to input data
    inputdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

//class for Batsman
class Batsman:public Cricketer{
	private:
	    int totalRuns;
    	double averageRuns;
    	int bestPerformance;
	
	public: 	
	//constrctor
    inputBatsmanData() {
        inputdata();                    // Calling base class function to input common data
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();                      // Calculate average runs
    }

    // Function to calculate average runs
    calculateAverageRuns() {
        averageRuns = totalRuns / 10.0;               // Assuming 10 innings
    }

    // Function to display Batsman data
    displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};


int main(){
	Batsman batsman;                   //batsman is an object of Batsman
	batsman.inputBatsmanData();			//function calling
	cout<<"\n";
	
    batsman.displayData();				//function calling
}
