#include <iostream>
int main() {
    const double PI = 3.14159;
    double radius, area;
    // Prompt the user to enter the radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    // Calculate the area of the circle
    area = PI * radius * radius;
    // Display the calculated area
    std::cout << "The area of the circle with radius " << radius << " is: " << area << std::endl;
    return 0;
}
/*
output:
Enter the radius of the circle: 3.14
The area of the circle with radius 3.14 is: 30.9748
*/
