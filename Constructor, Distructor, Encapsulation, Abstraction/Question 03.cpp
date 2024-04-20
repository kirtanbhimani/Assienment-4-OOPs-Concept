//3. Write a C++ program to create a class called Car that has private
//  member variables for company, model, and year. Implement member
//  functions to get and set these variables.

#include<iostream>
using namespace std;

//class for Car
class Car{
	private:
		string company;           
		string model;
		int year;
		
	public:
		Car(string comp, string mdl, int yr){                //Car is Contructor
		company = comp;
		model = mdl;
		year = yr;
		}
		
		//set company name, model and year
		setCompany(string comp){			
			company=comp;
		}
		setModel(string mdl){				
			model=mdl;
		}
		setYear(int yr){					
			year=yr;
		}
		
		//get company name, model and year
		string getCompany(){
        	return company;
    	}
    	string getModel(){
        	return model;
    	}
    	int getYear(){
        	return year;
    	}
};

int main(){
	Car mycar("Hyundai","Verna",2020);						//mycar is an object
	
	//initial details
	cout << "Initial Details:" <<endl;
    cout << "Company: " << mycar.getCompany() << endl;
    cout << "Model: " << mycar.getModel() << endl;
    cout << "Year: " << mycar.getYear() << endl;

	//set values
    mycar.setCompany("Honda");					
    mycar.setModel("City");					
    mycar.setYear(2021);					

	//updated values
    cout << "\nUpdated Details:" << endl;
    cout << "Company: " << mycar.getCompany() << endl;
    cout << "Model: " << mycar.getModel() << endl;
    cout << "Year: " << mycar.getYear() << endl;
}
