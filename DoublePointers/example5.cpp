#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
  int left = 0, right = nums.size() - 1;

  while (left < right) {
    int sum = nums[left] + nums[right];
    if (sum == target) {
      return {left, right};
    } else if (sum < target) {
      left++;
    } else {
      right--;
    }
  }

  return {-1, -1}; // No such pair found
}
