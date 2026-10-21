class Solution {
public:
    int fib(int n) {

         int sum =1;
         int curr=0;
         int temp=0;
        for(int i =0 ; i<n ;i++){
           
           temp=curr;
           curr += sum;
           sum =temp;
        }
        return curr;
        
    }
};