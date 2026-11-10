class Solution {
public:
    string reverseVowels(string s) {

  vector<int> ind;
        string vow="";
        for(int i=s.length()-1  ; i>=0 ; i--){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
   s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                 vow.push_back(s[i]);
                 ind.push_back(i);
            }
        }
        int tmp=0;
        int tmp2=ind.size()-1;
        for(int i=0 ; i<ind.size() ;i++){
            tmp=(ind[tmp2]);
            tmp2--;
            s[tmp]=vow[i];
        }
        return s;
    }
};