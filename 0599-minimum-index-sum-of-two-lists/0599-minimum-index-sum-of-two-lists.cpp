class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        int tmp=INT_MAX;
           
        vector<string> ans;
        for(int i=0 ; i<list1.size() ; i++){

            for(int j=0 ; j<list2.size() ; j++){

                if(list1[i]==list2[j]) {
                   if(i+j <tmp) {
                    tmp=i+j;
                   while(!ans.empty()){
                     ans.pop_back();
                   }
                    ans.push_back(list1[i]);
                    break;
                   }
                   else if(i+j==tmp){
                     ans.push_back(list1[i]);
                     break;
                   }
                }
            }
        }
        return ans;
    }
};