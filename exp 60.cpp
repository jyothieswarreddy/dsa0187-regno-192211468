#include <iostream>
int main() {
    int num1, num2, num3, max_num;
    // Input three numbers
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    // Find the maximum using conditional statements
    if (num1 >= num2 && num1 >= num3) {
        max_num = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max_num = num2;
    } else {
        max_num = num3;
    }
    // Output the maximum number
    std::cout << "The maximum number is: " << max_num << std::endl;
    return 0;
}
/*
output:
Enter three numbers: 56
68
91
The maximum number is: 91
*/
