#include <string>
#include <iostream>
int countWords(const std::string& str) {
    int wordCount = 0;
    bool isWord = false;
    for (char ch:str) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (isWord) {
                wordCount++;
            }
            isWord = false;
        } else {
            isWord = true;
        }
    }
    if (isWord) {
        wordCount++;
    }
    return wordCount;
}
int main() {
    std::string str = "One two three\n four\tfive ";
    std::cout << "Number of words: " << countWords(str) << std::endl;
    return 0;
}
