#include <vector>

int searchInsert(std::vector<int>& nums, int target) {
    int start_idx = 0;
    int end_idx = nums.size() - 1;
    while (end_idx - start_idx >= 0) {
        int curr_idx = (end_idx - start_idx) / 2 + start_idx;
        if (nums[curr_idx] == target) {
            return curr_idx;
        } else if (nums[curr_idx] > target) {
            end_idx = curr_idx - 1;  // search left
        } else if (nums[curr_idx] < target) {
            start_idx = curr_idx + 1;  // search right
        }
    }

    return start_idx;
}