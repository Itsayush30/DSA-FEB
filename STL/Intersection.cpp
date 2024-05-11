#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

int main() {
  std::set<int> set1 = {1, 3, 5, 7};
  std::vector<int> set2 = {2, 3, 5, 8};

  // Use a temporary container to store the intersection
  std::vector<int> intersection;
  std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(intersection));

  std::cout << "Intersection: ";
  for (int num : intersection) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
