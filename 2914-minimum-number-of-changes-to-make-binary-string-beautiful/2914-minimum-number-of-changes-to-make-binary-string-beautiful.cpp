class Solution {
public:
    int minChanges(string s) {
        
        // vector<string> sub;
        // string tmp="";
        // for(int i=0 ; i<s.length() ; i+=2){
        //     tmp+=s[i];
        //     tmp+=s[i+1];
        //     sub.push_back(tmp);
        //     tmp="";
        // }
        int count=0;
        for(int i=0 ; i<s.size()-1 ;i+=2){
            if(s[i]==s[i+1]) continue;
            else {
                if (s[i]='1'){
                    s[i+1]='1';
                    count++;
                }
                else {
                    s[i+1]='0';
                count++;
                }
            }
        }
        return count;
    }
};