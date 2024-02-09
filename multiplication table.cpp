#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number to find its multiplication table: ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
/*
output:
Enter a number to find its multiplication table: 9
9 * 1 = 9
9 * 2 = 18
9 * 3 = 27
9 * 4 = 36
9 * 5 = 45
9 * 6 = 54
9 * 7 = 63
9 * 8 = 72
9 * 9 = 81
9 * 10 = 90
*/
