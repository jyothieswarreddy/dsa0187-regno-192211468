#include <iostream>
int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number % 2 == 0) {
        std::cout << number << " is an even number." << std::endl;
    } else {
        std::cout << number << " is an odd number." << std::endl;
    }
    return 0;
}
/*
output:
Enter a number: 56
56 is an even number
*/
