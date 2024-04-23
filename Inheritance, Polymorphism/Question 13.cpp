/*
13.Write a program to find the max number from given two
numbers using friend function
*/

#include <iostream>
using namespace std;

//create class for Test
class Test {
	private:
    	int x, y;

	public:
    	void input() {
        	cout << "Enter two numbers: ";
        	cin >> x >> y;
    	}

    friend void find(Test t);			//Friend Function
};

//for find the largest value
find(Test t) {
    if (t.x > t.y) {
        cout << "Largest is: " << t.x;
    } else {
        cout << "Largest is: " << t.y;
    }
}

int main() {
    Test t;				//t is an object
    
	t.input();			//calling function for input data
    find(t);			//calling function for find the largest value
}

