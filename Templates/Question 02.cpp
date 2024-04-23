//2. Write a program of to sort the array using templates

#include<iostream>
using namespace std;

// Function to sort an array of integers using bubble sort
bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Test the bubbleSort function with an array of integers
    int numbers[] = {5, 25, 15, 10, 20};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    //for print the Original Array
    cout << "Original array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout <<"\n"<< endl;

	//function calling
    bubbleSort(numbers, size);
	
	//for print the Sorted Array
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

}
