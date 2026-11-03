class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int grt=nums[n];
        int i=0;
        int count=0;
        while(i!=n){

            if(nums[i]==grt){
                i++;
            }
            else{
              count += abs(grt-nums[i]);
              i++;
            }
        }
        return count;
    }
};