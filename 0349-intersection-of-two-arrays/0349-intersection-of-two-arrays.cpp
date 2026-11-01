class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> ans;
        for(int i=0 ; i<nums2.size() ;i++){
             if(find(ans.begin(),ans.end(),nums2[i]) != ans.end()){
                continue;
             }
             else{
              for(int j=0 ; j<nums1.size();j++){
                if(nums2[i]==nums1[j]){
                    ans.push_back(nums2[i]);
                    break;
                }
              }
             }
        }
        return ans;
    }
};