#include <iostream>
#include <cmath>
int main() {
    float num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;
    float modulo = fmod(num1, num2);
    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;
    std::cout << "Modulo: " << modulo << std::endl;
    return 0;
}
/*
output:
Enter the first number: 8.16
Enter the second number: 5.8
Addition: 13.96
Subtraction: 2.36
Multiplication: 47.328
Division: 1.4069
Modulo: 2.36
*/
