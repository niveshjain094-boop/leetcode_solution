class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
     vector<int> peak;
     vector<int> valley;

     for(int i=1 ; i<nums.size()-1 ; i++){
        if(nums[i]>nums[i+1] && nums[i]>nums[i-1]){
            peak.push_back(nums[i]);
        }
     }
      for(int i=1 ; i<nums.size()-1 ; i++){
        if(nums[i]<nums[i+1]&&nums[i]<nums[i-1]){
            valley.push_back(nums[i]);
        }
     }
     
     int sum1=0;
     int sum2=0;
      for(int i=0 ; i<peak.size();i++){
            sum1 += peak[i];
     }
     for(int i=0 ; i<valley.size();i++){
            sum2 += valley[i];
     }
     
     int final = sum1-sum2;
     return final;
    }
};