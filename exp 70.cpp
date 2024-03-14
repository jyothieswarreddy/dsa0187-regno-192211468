#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the input is negative
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    // Calculate the factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "The factorial of " << num << " is: " << factorial << endl;

    return 0;
}
/*
output:
Enter a positive integer: 9
The factorial of 9 is: 362880
*/
