class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int med = nums.size()/2;
        int count=0;
         int i=0;
         
         sort(nums.begin(),nums.end());
         while(i<nums.size()){
             
             if(nums[i]!=nums[med]){
                 if(nums[i]<nums[med]){
                  count+=(nums[med]-nums[i]);
                  i++;
                    
                 }
                 else {
                   count+=(nums[i]-nums[med]);
                    i++;
                 }
             }
             else i++;
         }
         return count;
    }
};