class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        string ans="";
        int max=0;
        for(int i=0 ; i<s.length() ; i++){
            
            for(int j=i ; j<s.length() ; j++){
            if(ans.find(s[j])!= string::npos){
                   
                  
                   break;
            }
            else{
                ans+=s[j];
            }
          }
          if(ans.length()>max){
                    max=ans.length();
                   } 
                    ans.clear();
        }
        return max;
    }
};