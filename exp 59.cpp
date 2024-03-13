#include <iostream>
int main() {
    float length, width, area;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    area = length * width;
    std::cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << area << std::endl;
    return 0;
}
/*
output:
Enter the length of the rectangle: 10
Enter the width of the rectangle: 9
The area of the rectangle with length 10 and width 9 is: 90
*/
