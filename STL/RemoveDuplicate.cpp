#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  std::vector<int> arr = {2, 2, 3, 1, 1, 4};

  // Remove duplicates in-place (unique returns an iterator to the new end)
  arr.erase(std::unique(arr.begin(), arr.end()), arr.end());

  std::cout << "Vector after removing duplicates: ";
  for (int num : arr) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
