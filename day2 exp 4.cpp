#include <iostream>
// Function prototype
int& getReferenceTo(int& x);
int main() {
    int a = 5;
    std::cout << "Before modification: a = " << a << std::endl;
    // Using the function to get a reference to 'a' and modifying its value
    getReferenceTo(a) = 10;
    std::cout << "After modification: a = " << a << std::endl;   
    return 0;
}
// Function returning a reference to an integer
int& getReferenceTo(int& x) {
    // Return the reference to the integer passed to it
    return x;
}
/*
output:
Before modification: a = 5
After modification: a = 10
*/
