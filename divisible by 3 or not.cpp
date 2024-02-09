#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    (number % 3 == 0) ? cout << number << " is divisible by 3" : cout << number << " is not divisible by 3";
    return 0;
}
/*
output:
Enter an integer: 9
9 is divisible by 3
Enter an integer: 4
4 is not divisible by 3
*/
