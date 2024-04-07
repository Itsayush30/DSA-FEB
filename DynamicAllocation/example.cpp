#include <iostream>

int main() {
    // Dynamically allocate an array of 5 integers
    int* dynamicArray = new int[5];

    // Check if allocation was successful
    if (dynamicArray == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Assign values to the dynamically allocated array
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }

    // Access and print the values of the dynamically allocated array
    std::cout << "Dynamically allocated array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamically allocated array
    delete[] dynamicArray;

    return 0;
}
