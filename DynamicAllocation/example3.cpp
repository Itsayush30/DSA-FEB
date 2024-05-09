#include <iostream>
#include <vector> // Using vector for easier resizing

using namespace std;

int main() {
  int num, capacity = 2; // Initial capacity of 2
  vector<int> arr(capacity); // Create a vector with initial capacity
  int size = 0; // Keeps track of the number of elements in the array

  // Read integers from user until negative number is entered
  cout << "Enter integers (enter a negative number to stop):" << endl;
  while (true) {
    cin >> num;

    if (num < 0) {
      break;
    }

    // Check if array needs resizing
    if (size == capacity) {
      // Double the capacity
      capacity *= 2;
      arr.resize(capacity); // Resize the vector
    }

    // Add the new element
    arr[size++] = num;
  }

  // Print the final array contents
  cout << "Final list: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
