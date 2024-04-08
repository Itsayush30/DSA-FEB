#include <iostream>

int main() {
    // Dynamically allocate a 2D array of integers
    int rows, cols;
    std::cout << "Enter the number of rows and columns for the 2D array: ";
    std::cin >> rows >> cols;

    // Allocate memory for the 2D array
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Initialize the 2D array
    int count = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = count++;
        }
    }

    // Print the 2D array
    std::cout << "The elements of the 2D array are:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
