class Solution {
public:
    int maxLength(vector<int>& nums) {
    
    long long GCD=nums[0];
    __int128 prod=nums[0];
    long long  LCM = nums[0];
    int len=1;
    int Max=0;
     for(int i=0 ; i<nums.size()-1;i++){
        len=1;
         GCD=nums[i];
         prod=nums[i];
        LCM = nums[i];

      for(int j=i+1 ; j<nums.size() ;j++){
       if(prod>LLONG_MAX/nums[j]) break;
       GCD = gcd(GCD,nums[j]);
       prod =prod *nums[j];
        LCM = lcm(LCM,nums[j]);
        len++;
        if(prod==LCM*GCD && len>Max) Max=len; 
     }
     }
     return Max;
    }
};