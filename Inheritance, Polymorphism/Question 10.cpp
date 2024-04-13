/* 10.Write a program to concatenate the two strings using
Operator Overloading */

#include <iostream>
#include <cstring> // For strlen and strcpy
using namespace std;

// Class representing a string
class String {
	private:
    	char* str; // Pointer to character array (string)

	public:
    	// Constructor to initialize the string with a given C-style string
    	String(const char* s = "") {
        	int length = strlen(s);
        	str = new char[length + 1]; // Allocate memory for the string (+1 for null terminator)
        	strcpy(str, s);              // Copy the string into the allocated memory
    	}

    	// Destructor to free dynamically allocated memory
    	~String() {
        	delete[] str; // Free allocated memory
    	}

    	// Overloaded + operator to concatenate two strings
    	String operator+(const String& other) const {
        	// Calculate the length of the resulting string
        	int newLength = strlen(str) + strlen(other.str);

        	// Allocate memory for the concatenated string (+1 for null terminator)
        	char* resultStr = new char[newLength + 1];

        	// Copy the first string into the result string
        	strcpy(resultStr, str);

        	// Concatenate the second string onto the result string
        	strcat(resultStr, other.str);

        	// Create a new String object with the concatenated result
        	String result(resultStr);

	        // Free the temporary memory used for the result string
    	    delete[] resultStr;

        	return result;
    	}
	
    // Function to display the string
    void display() const {
        cout << str;
    }
};

int main() {
    // Create String objects representing two strings
    String s1("Hello, ");
    String s2("world!");

    // Concatenate the strings using operator overloading
    String concatenated = s1 + s2;

    // Display the concatenated string
    cout << "Concatenated String: ";
    concatenated.display();						
    cout << endl;

}

