#include <iostream>
int main() {
    int number;
    // Input an integer from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;
    // Check if the number is odd using bitwise AND operator
    if (number & 1) {
        std::cout << number << " is an odd number." << std::endl;
    } else {
        std::cout << number << " is not an odd number." << std::endl;
    }
    return 0;
}
/*
output:Enter an integer: 7
7 is an odd number
*/
