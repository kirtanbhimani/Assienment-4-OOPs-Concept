//7. Write a C++ program to implement a class called Date that has private
//   member variables for day, month, and year. Include member functions to
//   set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Date{
	private:
		int day, month, year;
		
	public:
		Date(int Day,int Month,int Year){
			day = Day;
			month = Month;
			year = Year;
		}
		setDate(int Day, int Month, int Year){
			day = Day;
			month = Month;
			year = Year;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		valid(){
			if (year<0)
				return false;
			
			if (month<1 || month>12)
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
	
	cout<<"DAY : "<<date.getDay()<<endl;
	cout<<"MONTH : "<<date.getMonth()<<endl;
	cout<<"YEAR : "<<date.getYear()<<endl;
	
	if (date.valid())
		cout<<"Date is Valid..."<<endl;
	
	else 
		cout<<"Date is not Valid..."<<endl;
	
}
