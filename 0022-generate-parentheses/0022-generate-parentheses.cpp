class Solution {
public:
vector<string> ans;
void solve(int open , int close ,int  n , string currstr ){

       if(currstr.size()==2*n){
        ans.push_back(currstr);
        return;
       }
       if(open<n){
         currstr.push_back('(');
         solve( open+1 , close , n , currstr);
         currstr.pop_back();
       }

     if(close<open){
        currstr.push_back(')');
        solve( open , close+1 , n , currstr);
        currstr.pop_back();
     }
      }
    vector<string> generateParenthesis(int n) {
        int open =0;
        int close =0;
        string currstr;
        solve(open,close,n,currstr);
      
        return ans;
    }
};