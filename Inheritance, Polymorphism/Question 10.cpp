/* 10.Write a program to concatenate the two strings using
Operator Overloading */

#include <iostream>
#include <string.h>
using namespace std;

//class for add string
class AddString {
public:
    char s1[25], s2[25];
	
	//Constructor
    AddString(char str1[], char str2[]) {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
	
	//Function for Concatenation two string
    operator+() {
        cout << "\nConcatenation two string: " << strcat(s1, s2);
    }
};

int main() {
    char str1[] = "Kirtan";				//1st String
    char str2[] = "Bhimani";			//2nd String
    
    AddString a1(str1, str2);			//a1 is object of AddString
    +a1;								//add string in a1
}

