class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0;
        int equal=0;
        for(auto i:nums)
        {
            if(i<target)
                less++;
            else if(i==target)
                equal++;
        }
        vector<int>ans;
        for(int i=less;i<less+equal;i++)
            ans.push_back(i);
            
        return ans;
    }
};