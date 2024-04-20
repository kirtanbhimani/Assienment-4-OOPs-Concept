//7. Write a C++ program to implement a class called Date that has private
//   member variables for day, month, and year. Include member functions to
//   set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

//class for Date
class Date{
	private:
		int day, month, year;
		
	public:
		//Constuctor
		Date(int Day,int Month,int Year){
			day = Day;
			month = Month;
			year = Year;
		}
		
		//set date
		setDate(int Day, int Month, int Year){
			day = Day;
			month = Month;
			year = Year;
		}
		
		//get day,month and year
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		
		//fintion for validation
		valid(){
			if (year<0)                //for year is negative valued
				return false;
			
			if (month<1 || month>12)			//for year under 1 below 12  
				return false;
		
			if (day<1 || day > daysinmonth(month, year))
				return false;
				
			return true;
		}
	private:
    // Helper function to determine the number of days in a given month
    int daysinmonth(int m, int y) {
        switch (m) {
            case 2:
                // Check for leap year
                if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
                    return 29;
                else
                    return 28;
            //for 30days months
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
            default:
                return 31;
        }
    }
};

int main(){
	
	//object date 
	Date date(29,2,2016);       //we can take example of leap year
	
	cout<<"DAY : "<<date.getDay()<<endl;			//function calling
	cout<<"MONTH : "<<date.getMonth()<<endl;		//function calling
	cout<<"YEAR : "<<date.getYear()<<endl;			//function calling
	
	//validation function calling
	if (date.valid())
		cout<<"Date is Valid..."<<endl;
	
	else 
		cout<<"Date is not Valid..."<<endl;
	
}
