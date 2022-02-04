#include <vector>

// O(n^2) solution
// O(n) solution could be implemented using an unordered_map

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        int subtarget = target - nums[i];
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == subtarget && j != i) {
                return {i,j};
            }
        }
    }
    
    return {-1,-1};
