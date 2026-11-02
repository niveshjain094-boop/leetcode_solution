class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp;
         unordered_map<string,int> ap;
        for(int i=0 ; i<words1.size() ; i++){
            mp[words1[i]]++;
        }
       int count=0;
        for(int i=0 ; i<words2.size() ; i++){
            ap[words2[i]]++;

        }for(int i=0 ; i<words2.size() ; i++){
        //    if(words1[i]==words2[i] ){
        
           if(ap[words2[i]] == 1 && mp[words2[i]] == 1){
                  count++;
            }
    
        }
        
            return count;
            
    }
};