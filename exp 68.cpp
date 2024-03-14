#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    double result;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        result = static_cast<double>(num1) / num2;
        cout << "The result of " << num1 << " divided by " << num2 << " is: " << result << endl;
    }

    return 0;
}
/*
output:
Enter the first number: 5
Enter the second number: 8
The result of 5 divided by 8 is: 0.625
*/
