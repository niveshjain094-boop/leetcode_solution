class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        vector<char> alph;
        unordered_map<char,int> inv;
        for(int i='a'; i<='z' ; i++){

            alph.push_back(i);
        }

        int temp=0;
        for(int i=0 ; i<s.size();i++){
              for(int j=i+1 ; j<s.size() ; j++){
                
                  if(s[i]==s[j]){
                          temp= j-i;
                       inv[s[i]]=abs(temp-1);
                       temp=0;
                       break;
                  }
                }
        }
        char ch = 'c';
         for(int i=0; i<26;i++) {
                   
            ch = alph[i];
            if(inv.find(ch) != inv.end()){
                if(distance[i]!=inv[ch]){
                    return false;
                }
            }
         }      
             return true;   
        
    }
};