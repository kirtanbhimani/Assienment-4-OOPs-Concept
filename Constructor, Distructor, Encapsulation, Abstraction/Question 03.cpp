//3. Write a C++ program to create a class called Car that has private
//  member variables for company, model, and year. Implement member
//  functions to get and set these variables.

#include<iostream>
using namespace std;

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
		
		setCompany(string comp){
			company=comp;
		}
		setModel(string mdl){
			model=mdl;
		}
		setYear(int yr){
			year=yr;
		}
		
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
	Car mycar("Hyundai","Verna",2020);
	
	cout << "Initial Details:" <<endl;
    cout << "Company: " << mycar.getCompany() << endl;
    cout << "Model: " << mycar.getModel() << endl;
    cout << "Year: " << mycar.getYear() << endl;

    mycar.setCompany("Honda");
    mycar.setModel("City");
    mycar.setYear(2021);

    cout << "\nUpdated Details:" << endl;
    cout << "Company: " << mycar.getCompany() << endl;
    cout << "Model: " << mycar.getModel() << endl;
    cout << "Year: " << mycar.getYear() << endl;
}
