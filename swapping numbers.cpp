#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter the first number (x): ";
    cin >> x;
    cout << "Enter the second number (y): ";
    cin >> y;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "After swapping, x = " << x << " and y = " << y << endl;
    return 0;
}
/*
output:
Enter the first number (x): 89
Enter the second number (y): 95
After swapping, x = 95 and y = 89
*/
