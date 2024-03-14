#include <iostream>
int main() {
    double length, width, area;
    // Input length and width from user
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    // Calculate the area of the rectangle
    area = length * width;
    // Display the calculated area
    std::cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << area << std::endl;
    return 0;
}
/*
output:Enter the length of the rectangle: 8
Enter the width of the rectangle: 10
The area of the rectangle with length 8 and width 10 is: 80
*/
