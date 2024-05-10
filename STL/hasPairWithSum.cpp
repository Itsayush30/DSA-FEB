#include <iostream>
#include <unordered_map>
#include <vector>

bool hasPairWithSum(const std::vector<int>& arr, int target) {
  std::unordered_map<int, int> seen;
  for (int i = 0; i < arr.size(); ++i) {
    int complement = target - arr[i];
    if (seen.count(complement)) { // Check if complement exists
      return true;
    }
    seen[arr[i]] = i; // Add current element to the map
  }
  return false;
}

int main() {
  std::vector<int> arr = {1, 6, 4, 5};
  int target = 11;

  if (hasPairWithSum(arr, target)) {
    std::cout << "Pair with sum " << target << " exists." << std::endl;
  } else {
    std::cout << "Pair with sum " << target << " does not exist." << std::endl;
  }

  return 0;
}
