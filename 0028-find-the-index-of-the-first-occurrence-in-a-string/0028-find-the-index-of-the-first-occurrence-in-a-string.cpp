class Solution {
public:
    int strStr(string haystack, string needle) {
       
       int k=0;
        for(int i=0 ; i<haystack.length() ;i++){
            if(needle[0]==haystack[i]){
               for(int j=i ; j<haystack.length();j++){

                if(needle[k]==haystack[j]){
                    k++;
                }
                else {
                    k=0;
                    break;
                }
                if(k==needle.length()) return i;
               }
           k=0;
            }
        }
        
        return -1;
        
    }
};