#include <iostream>
#include <algorithm>
int getMin(int arr[], int n) {
    return *std::min_element(arr, arr + n);
}
int getMax(int arr[], int n) {
    return *std::max_element(arr, arr + n);
}
int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Minimum element of array: " << getMin(arr, n) << " ";
    std::cout << "Maximum element of array: " << getMax(arr, n) << std::endl;
    return 0;
}
