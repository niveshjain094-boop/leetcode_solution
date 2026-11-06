class Solution {
public:
    bool canJump(vector<int>& nums) {
     if(nums.size()==1) return true;
        int max=nums[0];
        int tmp=0;
       for(int i =0 ; i<=max ; i++){
        tmp=nums[i]+i;
        if(max<tmp){
            max=tmp;
        }
        if(max>=nums.size()-1) return true;

       }
       return false;
    }
};