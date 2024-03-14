#include <iostream>
// Function prototype
void swap(int &a, int &b);
int main() {
    int x = 10;
    int y = 20;
    std::cout << "Before swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    // Calling the swap function
    swap(x, y);
    std::cout << "After swapping:" << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl;   
    return 0;
}
// Function to swap the values of two integers
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
/*
output:
Before swapping:
x = 10, y = 20
After swapping:
x = 20, y = 10
*/
