// WAP a c++ progrma to implement the fibonachi series
#include <iostream>

using namespace std;

int main() {
    int n, num1 = 0, num2 = 1, next = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci Series: " << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    for (int i = 2; i <= n; i++) {
        next = num1 + num2;
        num1 = num2;
        num2 = next;
        cout << next << endl;
    }

    return 0;
}