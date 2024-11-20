#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num, originalNum, rem, res = 0;
    cout << "Enter a 3 digit number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        res += static_cast<int>(pow(rem, 3));  
        originalNum /= 10;
    }

    if (res == num) {
        cout << num << " is an Armstrong number."; 
    } else {
        cout << num << " is not an Armstrong number."; 
    }

    return 0;
}