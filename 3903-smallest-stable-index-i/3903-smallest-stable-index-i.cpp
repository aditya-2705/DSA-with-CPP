class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxArr(n,0);
        vector<int>minArr(n,0);
        maxArr[0]=nums[0];
        minArr[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            maxArr[i]=max(nums[i],maxArr[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            minArr[i]=min(nums[i],minArr[i+1]);
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int stb=maxArr[i]-minArr[i];
            if(stb<=k)
            {
                ans=min(ans,i);
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};