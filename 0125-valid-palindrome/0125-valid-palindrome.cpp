class Solution {
public:
    bool isPalindrome(string s) {
        
       string result="";
       
     
    for (char c : s) {
         c= tolower(c);
        if (isalnum(c)) {
            result += c;
           }
       }
     int j=result.length()-1;
     int i = 0;
       while(i<j){
            if(result[i]!=result[j]) {
                return false;
                
            } 
            i++;
        j--;
       }
  return true;
    }
};