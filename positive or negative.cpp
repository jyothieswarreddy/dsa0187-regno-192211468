#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        cout << "The number is positive";
    } else if (num < 0) {
        cout << "The number is negative";
    } else {
        cout << "The number is zero";
    }
    return 0;
}
/*
output:
Enter a number: 8
The number is positive
Enter a number: 0
The number is zero
Enter a number: -9
The number is negative
*/
