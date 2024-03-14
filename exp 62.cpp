#include <iostream>
int main() {
    int integerNum;
    float floatNum;
    // Read an integer from the user
    std::cout << "Enter an integer number: ";
    std::cin >> integerNum;
    // Read a float number from the user
    std::cout << "Enter a float number: ";
    std::cin >> floatNum;
    // Perform division of the float by the integer
    float result = floatNum / static_cast<float>(integerNum);
    // Display the result of the division
    std::cout << "Result of dividing " << floatNum << " by " << integerNum << " is: " << result << std::endl;
    return 0;
}
/*
output:
Enter an integer number: 10
Enter a float number: 50
Result of dividing 50 by 10 is: 5
*/
