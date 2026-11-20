class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int min=INT_MAX;
        int count=0;
        for(int i=0 ; i<nums.size();i++){
            int sum=nums[i];
            for(int j=i ; j<nums.size() ; j++){
                
                if(min>=nums[j]){
                    min=nums[j];
                }
                sum= nums[j] & sum;
                if(sum==min) count++;
            }
            min=INT_MAX;
        }
        return count;
    }
};