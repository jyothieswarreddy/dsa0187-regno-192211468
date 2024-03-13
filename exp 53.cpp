#include <iostream>
int main() {
    int myInteger = 10;
    float myFloat;
    // Assigning the integer variable to the float variable
    myFloat = static_cast<float>(myInteger);
    std::cout << "Integer value: " << myInteger << std::endl;
    std::cout << "Float value (after assigning integer): " << myFloat << std::endl;
    return 0;
}
/*
output:
Integer value: 10
Float value (after assigning integer): 10
*/
