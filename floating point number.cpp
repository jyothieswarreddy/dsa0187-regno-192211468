#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    int roundedDown = floor(num);
    int roundedUp = ceil(num);
    cout << "Rounded down to the nearest integer: " << roundedDown << endl;
    cout << "Rounded up to the nearest integer: " << roundedUp << endl;
    return 0;
}
/*
output:
Enter a floating-point number: 9.8
Rounded down to the nearest integer: 9
Rounded up to the nearest integer: 10
*/

