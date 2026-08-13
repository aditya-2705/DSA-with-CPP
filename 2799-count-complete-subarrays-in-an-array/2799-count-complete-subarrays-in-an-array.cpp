class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int k=st.size();  //distinct elements

        unordered_map<int,int>f;
        int cnt=0;
        int i=0;
        for(int j=0;j<n;j++)
        {
            f[nums[j]]++;
            if(f[nums[j]]==1)
                k--;
            
            while(k==0)
            {
                cnt+=(n-j);
                f[nums[i]]--;
                if(f[nums[i]]==0)
                    k++;
                i++;
            }
        }
        return cnt;
    }
};