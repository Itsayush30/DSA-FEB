#include <vector>

int maxArea(const std::vector<int>& heights) {
  int left = 0, right = heights.size() - 1;
  int max_water = 0;

  while (left < right) {
    int width = right - left;
    int min_height = std::min(heights[left], heights[right]);
    max_water = std::max(max_water, width * min_height);

    // Move the shorter pointer towards the center
    if (heights[left] < heights[right]) {
      left++;
    } else {
      right--;
    }
  }

  return max_water;
}
