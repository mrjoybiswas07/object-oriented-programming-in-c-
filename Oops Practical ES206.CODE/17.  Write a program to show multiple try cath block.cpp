// Write a program to show multiple try cath block
#include <iostream>

using namespace std;

int main() {
    double numerator, denominator, sol;
    int index_insert;
    int arr[5] = {0, 0, 0, 0, 0}; // Correctly declare an array of size 5

    // Input for numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    // Exception handling for division by zero
    try {
        if (denominator == 0) {
            throw denominator; // Throwing denominator when it's zero
        }
        sol = numerator / denominator;
        cout << "Result of division: " << sol << endl; // Display result
    }
    catch (double derom) {
        cout << "The denominator is zero (can't divide by zero)" << endl;
    }

    // Input for index to insert element into array
    cout << "Enter index where you want to add an element in array (0-4): ";
    cin >> index_insert;

    // Exception handling for invalid index
    try {
        if (index_insert < 0 || index_insert > 4) {
            throw index_insert; // Throwing index if it's out of bounds
        }
        cout << "Enter element to insert at index " << index_insert << ": ";
        cin >> arr[index_insert];
        cout << "Element " << arr[index_insert] << " successfully inserted." << endl;
    }
    catch (int ind_ins) {
        cout << "You entered an invalid index, please enter a valid index number (0-4)." << endl;
    }

    return 0;
}