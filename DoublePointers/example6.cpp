#include <iostream>

void printArray(int** arr, int rows, int cols) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

int main() {
  int rows, cols;

  std::cout << "Enter the number of rows: ";
  std::cin >> rows;

  std::cout << "Enter the number of columns: ";
  std::cin >> cols;

  // Allocate memory for the rows (array of pointers)
  int** arr = new int* [rows];

  // Allocate memory for each column within each row
  for (int i = 0; i < rows; ++i) {
    arr[i] = new int[cols];
  }

  // Initialize the array with some values (optional)
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      arr[i][j] = i * cols + j; // Example initialization
    }
  }

  // Print the array
  std::cout << "Created Array: \n";
  printArray(arr, rows, cols);

  // Deallocate memory (important to prevent memory leaks)
  for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
