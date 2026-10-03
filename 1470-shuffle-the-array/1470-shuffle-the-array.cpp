#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        
        for (int i = 0; i < n; ++i) {
            nums[i] = nums[i] | (nums[i + n] << 10);
        }
        
        
        for (int i = n - 1; i >= 0; --i) {
            int x = nums[i] & 1023; 
            int y = nums[i] >> 10;
            
            nums[2 * i + 1] = y;
            nums[2 * i] = x;
        }
        
        return nums;
    }
};
