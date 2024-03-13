#include <iostream>
int main() {
    int myInteger = 10;
    float myFloat;
    // Implicit conversion from integer to float
    myFloat = myInteger;
    std::cout << "Integer value: " << myInteger << std::endl;
    std::cout << "Float value (after implicit conversion): " << myFloat << std::endl;
    return 0;
}
