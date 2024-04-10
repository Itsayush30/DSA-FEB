#include <iostream>

// Function to swap two integers using double pointers
void swap(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;
    
    // Pointer variables to store addresses of x and y
    int* ptrX = &x;
    int* ptrY = &y;

    std::cout << "Before swapping: x = " << *ptrX << ", y = " << *ptrY << std::endl;
    
    // Passing addresses of pointers to swap function
    swap(&ptrX, &ptrY);
    
    std::cout << "After swapping: x = " << *ptrX << ", y = " << *ptrY << std::endl;

    return 0;
}
