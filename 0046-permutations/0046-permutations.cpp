class Solution {
public:

    void solve(vector<int> &ds,vector<bool> &taken,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!taken[i])
            {
                taken[i]=true;
                ds.push_back(nums[i]);
                solve(ds,taken,nums,ans);
                ds.pop_back();
                taken[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        vector<bool>taken(nums.size(),false);
        solve(ds,taken,nums,ans);
        return ans;
    }
};