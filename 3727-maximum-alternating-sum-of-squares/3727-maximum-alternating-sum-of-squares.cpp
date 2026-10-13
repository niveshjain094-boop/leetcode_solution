class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        for( int &x : nums){
            x = abs(x);
        }
         int n = nums.size();
        vector<int> arr(n);
        int k=0;
        int tmp=0;
        sort(nums.begin(),nums.end());

        for(int i =1 ; i<nums.size();i+=2){

            arr[i]=nums[k];
            k++;
            tmp=i+1;
        }
        
        for(int i=0; i<nums.size() ; i+=2 ){
           arr[i]=nums[k];
           k++;
        }
        
         long long sum= arr[0]*arr[0];
        for(int i =1 ; i<arr.size() ; i++){
            if(i%2==1) {
                sum= sum -(arr[i]*arr[i]);
            }
            else if( i%2 ==0){
                sum = sum+ (arr[i]*arr[i]);
            }
        }
        return abs(sum);

    }
};