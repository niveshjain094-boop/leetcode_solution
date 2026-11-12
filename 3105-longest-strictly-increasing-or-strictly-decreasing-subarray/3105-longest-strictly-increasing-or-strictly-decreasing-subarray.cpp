class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int inc=1;
        int tmp=1;
        int dec=1;
        for(int i=0 ; i<nums.size()-1 ;i++){
            if(nums[i]<nums[i+1]){
                 tmp++;
            }
           
           
            else{
               tmp=1;
            } 
            if(tmp>inc){
                    inc=tmp;
                }
        }
        tmp=1;
        for(int i=0 ; i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                 tmp++;
            }
            else{ 
                tmp=1;
            }
            if(tmp>dec){
                    dec=tmp;
                }
        }
        if(dec>inc) return dec;
        else return inc;
    }
};