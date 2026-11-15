class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum=0;
        int count=0;
        int odd=0;
        int even=1;
       int modulo =pow(10,9) + 7;
      
      for(int i=0 ; i<arr.size();i++){
        sum+=arr[i];
        if(sum%2==0){
            count= (count+odd)%modulo;
            even++;
        }
        else{
            count= (count+even)%modulo;
            odd++;
        }
      }
 return count;
    }
};