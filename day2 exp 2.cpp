#include <iostream>
// Function prototype
int addNumbers(int a, int b);
int main() {
    int num1 = 5;
    int num2 = 7;
    // Use addNumbers to add num1 and num2
    int sum = addNumbers(num1, num2);
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << std::endl;   
    return 0;
}
// Function implementation
int addNumbers(int a, int b) {
    return a + b;
}
/*
output:
The sum of 5 and 7 is 12
*/
