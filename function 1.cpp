#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str) {
    int left = 0;
    int right = str.length() - 1;
    while(left < right) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    if (isPalindrome(input)) {
        cout << input << " is a palindrome";
    } else {
        cout << input << " is not a palindrome";
    }
    return 0;
}

