#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    size_t count = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            ++count;
        } else if (count > 0) {
            nums[i-count] = nums[i];
        }
    }
    
    return nums.size() - count;
}