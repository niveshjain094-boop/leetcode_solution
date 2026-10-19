class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
       
       vector<int> vec;
       vector<int> ans;
       int ind=0;
      for(int i=0 ; i<s.size() ; i++){
               
               if(c==s[i]){
                vec.push_back(i);
               }
                    
        }
         
         int temp=INT_MAX;

        for(int i =0 ; i<s.size() ;i++){
             
             for(int j=0 ; j<vec.size();j++){
            
             if(temp>=abs(i-vec[j]) && abs(i-vec[j])>=0){
                temp=abs(vec[j]-i);
             }
                } 
             ans.push_back(temp);
             temp=INT_MAX;    
        }
        return ans;
    }
};