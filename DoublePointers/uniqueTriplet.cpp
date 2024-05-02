#include <vector>

std::vector<std::vector<int>> threeSum(const std::vector<int>& nums) {
  std::vector<std::vector<int>> result;
  int n = nums.size();

  std::sort(nums.begin(), nums.end()); // Sort the array for efficient comparison

  for (int i = 0; i < n - 2; i++) {
    if (i > 0 && nums[i] == nums[i - 1]) { // Skip duplicates
      continue;
    }
    int target = -nums[i];
    int left = i + 1, right = n - 1;

    while (left < right) {
      int sum = nums[left] + nums[right];
      if (sum == target) {
        result.push_back({nums[i], nums[left], nums[right]});
        left++;
        right--;
        while (left < right && nums[left] == nums[left - 1]) { // Skip duplicates
          left++;
        }
        while (left < right && nums[right] == nums[right + 1]) { // Skip duplicates
          right--;
        }
      } else if (sum < target) {
        left++;
      } else {
        right--;
      }
    }
  }

  return result;
}
