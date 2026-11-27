class Solution {
public:
    string removeDuplicates(string s, int k) {
      int count=1;
        //for(int i=0; i<s.length()-1;i++){
           for(int j=0; j+1<s.size(); j++){
                
                if(s[j] ==s[j+1]) count++;
                else count=1;
                if(count==k){
                    s.erase((j-k)+2,k);
                    count=1;
                     j=-1;
                }
            }
        //}
        return s;
    }
};