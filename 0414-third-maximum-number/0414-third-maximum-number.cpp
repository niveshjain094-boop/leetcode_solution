class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long max = nums[0];
        long long sec = LLONG_MIN;
        long long third = LLONG_MIN;

        int i = 0;

        while (i < nums.size()) {
            if (nums[i] > max) {
                max = nums[i];
            }
            i++;
        }

        i = 0;
        while (i < nums.size()) {
            if (nums[i] > sec && nums[i] < max) {
                sec = nums[i];
            }
            i++;
        }

        if (sec == LLONG_MIN) {
            return max;
        }

       i = 0;
        while (i < nums.size()) {
            if (nums[i] > third && nums[i] < sec) {
                third = nums[i];
            }
            i++;
        }

        if (third == LLONG_MIN) {
            return max;
        }

        return third;
    }
};