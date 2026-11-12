class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> ans;
        int tmp=0;
        int n = matrix.size();
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ;j++){
            tmp=matrix[i][j];
            ans.push_back(tmp);   
            }
        }
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};