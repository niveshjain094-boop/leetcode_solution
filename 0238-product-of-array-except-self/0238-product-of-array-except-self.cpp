class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans;
        int temp = 1;
        for(int i =0 ; i<nums.size() ; i++){
              
              ans.push_back(temp);
              temp = temp*nums[i];
        }
        temp=1;
      for(int i = n-1 ; i>=0; i--){
             
             ans[i]= temp *ans[i];
             temp = temp * nums[i];
           
      }
      return ans;

    }
};