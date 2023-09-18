class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // multimap - for storing int value for duplicates also in sorted order
        multimap<int,int> mp;     
        // iteration on the matrix
        for(int i=0;i<mat.size();i++)   {
            int t = 0;
            for(int j=0;j<mat[i].size();j++)    {
                // calculating the number of soldiers
                t+=mat[i][j];
            }
            mp.insert({t,i});
        }

        vector<int> ans;
        for(auto it: mp)    {
            // in order to get k weakest row... if condition is used.
            if(k>0) {
                ans.push_back(it.second);
            }
            k--;
        }
        return ans;
    }
};