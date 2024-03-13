#include <iostream>
int main() {
    const int arraySize = 5;
    int myArray[arraySize] = {1, 2, 3, 4, 5};
    std::cout << "Elements of the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element " << i << ": " << myArray[i] << std::endl;
    }
    return 0;
}
/*
output:
Elements of the array:
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
*/
