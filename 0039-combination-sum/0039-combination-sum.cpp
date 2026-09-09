class Solution {
public:
    vector<vector<int>>ans;

    void solve(int idx,vector<int>&nums,vector<int>&ds,int target)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        if(target<0 || idx>=nums.size())
            return;
        
        ds.push_back(nums[idx]);
        solve(idx,nums,ds,target-nums[idx]);
        ds.pop_back();
        solve(idx+1,nums,ds,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        solve(0,candidates,ds,target);
        return ans;
    }
};