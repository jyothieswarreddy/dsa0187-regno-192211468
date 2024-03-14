#include <iostream>
// Function definition with a default argument
void printMessage(const std::string& message = "Hello") {
    std::cout << message << std::endl;
}
int main() {
    // Calling the function without passing any argument
    printMessage();
    return 0;
}

