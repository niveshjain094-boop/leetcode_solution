class Solution {
public:
    string digitSum(string s, int k) {
        
        vector<string> parts;
        int num=0;
        int digit =0;
        int sum=0;
        
        while(k<s.length()){
              for(int i=0; i<s.length();i+=k){
                 parts.push_back(s.substr(i,k));
              }
              for(int i=0 ; i<parts.size() ; i++){
                   sum=0;
                 for(int j = 0; j < parts[i].length(); j++) {
                 sum += parts[i][j] - '0';
                     }
                   parts[i]=to_string(sum);
                } 
                    s.clear();
                for(int i=0 ; i<parts.size() ; i++){
                    s += parts[i];
                } 
                parts.clear();
        }
        return s;
    }
};