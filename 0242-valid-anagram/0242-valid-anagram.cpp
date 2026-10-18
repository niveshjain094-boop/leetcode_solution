class Solution {
public:
    bool isAnagram(string s, string t) {
     
     int n =s.size();

     if(s.size()!= t.size()){
        return false;
     }
    for(int i=0 ; i<n;i++){

          
            if(s[0]==t[i] ){

                t.erase(t.begin()+i);
                s.erase(s.begin()+0);
                i=-1;
            }
            if(s.empty() && t.empty()){
                return true;
            }
           
     }
     return false;
    }
};