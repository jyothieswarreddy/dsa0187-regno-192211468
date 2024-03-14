#include <iostream>
#include <cmath>

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char shape) {
    if (shape == 't' || shape == 'T') {
        return 0.5 * base * height;
    } else {
        std::cerr << "Invalid shape specified for triangle calculation!\n";
        return -1; // Returning -1 to indicate error
    }
}

int main() {
    // Example usage
    double length = 5.0;
    double width = 3.0;
    double radius = 2.5;
    double base = 4.0;
    double height = 6.0;

    std::cout << "Area of rectangle: " << calculateArea(length, width) << std::endl;
    std::cout << "Area of circle: " << calculateArea(radius) << std::endl;
    std::cout << "Area of triangle: " << calculateArea(base, height, 't') << std::endl;

    return 0;
}
/*
output:
Area of rectangle: 15
Area of circle: 19.635
Area of triangle: 12
*/
