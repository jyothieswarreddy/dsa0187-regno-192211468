#include <iostream>

int main() {
    int arraySize;
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    // Validate array size
    if (arraySize <= 0) {
        std::cout << "Array size must be a positive integer." << std::endl;
        return 1;
    }

    // Dynamically allocate memory for the array
    int* myArray = new(std::nothrow) int[arraySize];
    
    // Check if memory allocation was successful
    if (myArray == 0) {
        std::cerr << "Memory allocation failed." << std::endl;
        return 1;
    }

    // Input array elements
    std::cout << "Enter " << arraySize << " integers:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> myArray[i];
    }

    // Print array elements
    std::cout << "You entered:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Free dynamically allocated memory
    delete[] myArray;

    return 0;
}
/*
output:
Enter the size of the array: 10
Enter 10 integers:
1
3
2
4
5
7
8
9
15
25
You entered:
1 3 2 4 5 7 8 9 15 25
*/
