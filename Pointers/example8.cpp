#include <iostream>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    // Assign the address of the first element of the array to the pointer 'ptr'
    ptr = arr;

    // Accessing array elements using pointer notation
    std::cout << "Using pointer notation:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    // Accessing array elements using array subscript notation
    std::cout << "\nUsing array subscript notation:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << ptr[i] << std::endl;
    }

    return 0;
}
