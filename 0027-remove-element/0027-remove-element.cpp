class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0 ; i<nums.size();i++){

            if(nums[i]!=val)  k++;
        }
        
        nums.erase(remove(nums.begin(),nums.end(),val),nums.end());

return k;
    }
};