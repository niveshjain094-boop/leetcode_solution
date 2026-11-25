class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
       int k=1;
       int MAX= -1;
        for(int i=0 ; i<nums.size()-1 ;i++){
            k=1;
            for(int j=i+1 ; j<nums.size(); j++ ){
                if(k%2==1) {
                    if(nums[j]== nums[j-1]+1){
                         k++;
                     if(k>MAX) MAX=k;
                    }
                    else break;
                }
                else {
                    if(nums[j]== nums[j-1]-1){
                         k++;
                    if(k>MAX) MAX=k;
                    }
                    else break;
                }
            }
        }
        return MAX;
    }
};