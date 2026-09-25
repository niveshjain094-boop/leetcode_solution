class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum=0;
        int left_sum=0;
        for(int i =0 ; i<nums.size(); i++){
             for(int j=0 ; j<i;j++){
             left_sum += nums[j];
             }
         for(int j=i+1 ; j<nums.size();j++){
            right_sum += nums[j];
         }
         if(left_sum==right_sum)  return i;
          else {
            right_sum=0;
            left_sum=0;
          }
        }
        return -1;
    }
};