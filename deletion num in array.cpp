#include <iostream>
using namespace std;
int main() {
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int pos; 
    cout << "Enter the position of the element to delete: ";
    cin >> pos;
    if (pos < 1 || pos > size) {
        cout << "Invalid position" << endl;
    } else {
        for (int i = pos - 1; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; 
        cout << "Array after deleting the element: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
output:
Enter the size of the array: 7
Enter the elements of the array: 7 8 10 14 17 19 25
Enter the position of the element to delete: 5
Array after deleting the element: 7 8 10 14 19 25
*/
