#include <iostream>

void reverseCString(char* str) {
    if (str == nullptr) // Check for null pointer
        return;

    char* end = str;
    char tmp;
    if (str) {
        while (*end) { // Find the end of the string
            ++end;
        }
        --end; // Move back one character to exclude the null terminator
    }

    // Swap characters from beginning and end
    while (str < end) {
        tmp = *str;
        *str++ = *end;
        *end-- = tmp;
    }
}

int main() {
    char str[] = "Hello, World!";
    std::cout << "Original String: " << str << std::endl;
    reverseCString(str);
    std::cout << "Reversed String: " << str << std::endl;
    return 0;
}
