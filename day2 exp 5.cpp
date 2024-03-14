#include <iostream>
// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    // Using the inline square function
    int result = square(number);
    std::cout << "The square of " << number << " is " << result << std::endl;
    return 0;
}
/*
output:
Enter an integer: 8
The square of 8 is 64
*/
