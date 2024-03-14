#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci sequence: ";

    // Print the Fibonacci sequence up to the nth term
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}
/*
output:
Enter the number of terms: 7
Fibonacci sequence: 0 1 1 2 3 5 8
*/
