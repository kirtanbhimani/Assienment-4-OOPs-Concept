/* 12.Write a program to swap the two numbers using friend
	functionwithout using third variable 
*/

#include <iostream>
using namespace std;

//class for Swap
class Swap {
    int num;

	public:
  	  Swap(int num) {
   		this->num = num;
   		}

    friend void swap(Swap&, Swap&);			//Friend Function
};

//Constructor
swap(Swap& s1, Swap& s2) {
    int temp;
    cout << "\nBefore Swapping: " << s1.num << " " << s2.num;
    temp = s1.num;					//temp is for store value for a time
    s1.num = s2.num;
    s2.num = temp;
    cout << "\nAfter Swapping: " << s1.num << " " << s2.num;
}

int main() {
    Swap s1(6), s2(10);			//Give some value for swapping
    swap(s1, s2);				//for Swapping the value
}

