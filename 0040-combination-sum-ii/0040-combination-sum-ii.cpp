class Solution {
public:

    void solve(int idx,int sum,vector<int>&ds,int target,vector<int>&nums,vector<vector<int>>&ans)
    {
        if(sum>target)
            return;
        
        if(sum==target)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            if(i>idx && nums[i]==nums[i-1])
                continue;
            ds.push_back(nums[i]);
            solve(i+1,sum+nums[i],ds,target,nums,ans);
            ds.pop_back();

        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,0,ds,target,candidates,ans);
        return ans;
    }
};