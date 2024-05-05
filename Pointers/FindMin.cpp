#include <iostream>

int findMin(int* arr, int size) {
  int* min_ptr = arr; // Initialize min_ptr to point to the first element

  for (int i = 1; i < size; i++) {
    if (*arr[i] < *min_ptr) { // Dereference to compare values
      min_ptr = &arr[i]; // Update min_ptr to point to the new minimum
    }
  }

  // Dereference min_ptr to return the value at the minimum element's address
  return *min_ptr;
}

int main() {
  int arr[] = {5, 2, 8, 1, 3};
  int size = sizeof(arr) / sizeof(arr[0]); // Get array size

  int min_value = findMin(arr, size);

  std::cout << "Minimum element in the array: " << min_value << std::endl;

  return 0;
}
