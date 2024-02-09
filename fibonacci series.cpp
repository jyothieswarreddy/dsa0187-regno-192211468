#include <iostream>
using namespace std;
int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
/*
output:
Enter the number of terms: 5
Fibonacci Series: 0 1 1 2 3
*/
