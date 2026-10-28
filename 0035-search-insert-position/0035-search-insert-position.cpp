class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int tmp=0;
           int n = nums.size()-1;

           //if(target<)


           for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==target){
                return i;
            }
            if(nums[i]<target){
                tmp=i+1;
            }
           }
           return tmp;
    }
};