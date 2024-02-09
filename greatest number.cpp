#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2;
    } else if (num2 > num1) {
        cout << num2 << " is greater than " << num1;
    } else {
        cout << "Both numbers are equal";
    }

    return 0;
}
/*
output:
Enter the first number: 9
Enter the second number: 28
28 is greater than 9
*/
