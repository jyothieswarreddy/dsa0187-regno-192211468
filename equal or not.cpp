#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    (num1 == num2) ? cout << "The numbers are equal" : cout << "The numbers are not equal";

    return 0;
}
/*
output:
Enter the first number: 66
Enter the second number: 66
The numbers are equal
Enter the first number: 98
Enter the second number: 89
The numbers are not equal
*/
