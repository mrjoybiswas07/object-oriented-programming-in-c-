// WAP using try-cath to show error on divide by zero
#include <iostream>

using namespace std;

int main() {
    double numerator, denominator, sol;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw denominator;
        }

        sol = numerator / denominator;
        cout << "The solution is: " << sol << endl;
    } catch (double denom) {
        cout << "The denominator is zero (can't divide with zero)." << endl;
    }

    return 0;
}