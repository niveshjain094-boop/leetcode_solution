class Solution {
public:
    int minChanges(string s) {
        
        vector<string> sub;
        string tmp="";
        for(int i=0 ; i<s.length() ; i+=2){
            tmp+=s[i];
            tmp+=s[i+1];
            sub.push_back(tmp);
            tmp="";
        }
        int count=0;
        for(int i=0 ; i<sub.size() ;i++){
            if(sub[i][0]==sub[i][1]) continue;
            else {
                if (sub[i][0]='1'){
                    sub[i][1]='1';
                    count++;
                }
                else {
                    sub[i][1]='0';
                count++;
                }
            }
        }
        return count;
    }
};