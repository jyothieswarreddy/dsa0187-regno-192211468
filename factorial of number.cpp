#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << number << " = " << factorial << endl;

    return 0;
}
/*
output:
Enter a positive integer: 5
Factorial of 5 = 120
*/
