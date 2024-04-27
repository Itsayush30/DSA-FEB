#include <iostream>
#include <cstring> // For strlen

int manualCharArrayLength(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[] = "Hello";

    int manualLen = manualCharArrayLength(str);
    int strlenLen = strlen(str); // Using built-in function

    std::cout << "Manual Length: " << manualLen << std::endl;
    std::cout << "strlen Length: " << strlenLen << std::endl;

    return 0;
}
