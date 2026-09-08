class Solution {
public:
    vector<int>v;
    int solve(vector<int>&nums,int target)
    {
        if(target==0)
            return 1;
        if(target<0)
            return 0;
        
        if(v[target]!=-1)
            return v[target];
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=solve(nums,target-nums[i]);
        }
        return v[target]=ans;
    }

    int combinationSum4(vector<int>& nums, int target) {
        v.assign(target+5,-1);
        return solve(nums,target);
    }
};