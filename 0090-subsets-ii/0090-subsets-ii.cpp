class Solution {
public:

    void solve(int idx,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans)
    {
        if(idx>=nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(idx+1,nums,ds,ans);
        ds.pop_back();
        solve(idx+1,nums,ds,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,nums,ds,ans);
        set<vector<int>>st(ans.begin(),ans.end());
        ans.assign(st.begin(),st.end());
        return ans;
    }
};