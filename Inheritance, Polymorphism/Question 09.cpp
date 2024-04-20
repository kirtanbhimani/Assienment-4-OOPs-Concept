/*9. Write a Program of Two 1D Matrix Addition using Operator 
Overloading */

#include <iostream>
using namespace std;

class Matrix {
    int a[3][3];

public:
	accept();
    display();
    operator+(Matrix x);
};
//for take matrix mamber from user
Matrix::accept() {
    cout << "\n Enter Matrix Element (3 X 3):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " ";
            cin >> a[i][j];
        }
    }
}
//for display matrix mamber from user
Matrix::display() {
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
//for addition of two matrix
Matrix::operator+(Matrix x) {
    int mat[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = a[i][j] + x.a[i][j];
        }
    }

    cout << "\n Addition of Matrix:\n\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main() {
    Matrix m, n;
    m.accept(); // Accepting Rows
    n.accept(); // Accepting Columns

    cout << " First Matrix:\n\n";
    m.display(); // Displaying First Matrix

    cout << "\n Second Matrix:\n\n";
    n.display(); // Displaying Second Matrix

    m + n; // Addition of Two Matrices. Overloaded '+' Operator
}




