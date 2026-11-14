class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
            int sum=0;
            int min= INT_MAX;
            int tmp=1;
        for(int i=0 ; i<nums.size() ;i++){
            sum=0;
            tmp=1;
            for(int j=i ; j<nums.size() ;j++){
                if(tmp<l) {
                    sum+= nums[j];
                    tmp++;
                    continue;
                }
                if(tmp<=r){
                    sum+= nums[j];
                    tmp++;
                    if(sum>0 && sum<min){
                        min=sum;
                    }
                }
                 else break;
            }
        }
        if(min==INT_MAX) return -1;
         else return min;
    }
};