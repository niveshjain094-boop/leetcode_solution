class Solution {
public:
    int climbStairs(int n) {
      // if(n<=2) return n;
       
       int prev=0;
       int curr=1;
       int tmp=0;
       for(int i =0 ; i<n ; i++){
           
           tmp = curr;
           curr += prev;
           prev = tmp;

       }
       return curr;
    }
};