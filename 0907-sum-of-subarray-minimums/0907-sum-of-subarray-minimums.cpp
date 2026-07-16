class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();

        //Previous smaller element
        stack<int>s1;
        vector<int>pse(n);
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && arr[s1.top()]>=arr[i])
            {
                s1.pop();
            }
            if(s1.empty())
                pse[i]=-1;
            else
                pse[i]=s1.top();
            
            s1.push(i);
        }
        
        //Next smaller element
        vector<int>nse(n);
        stack<int>s2;
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty() && arr[s2.top()]>arr[i])
            {
                s2.pop();
            }
            if(s2.empty())
                nse[i]=n;
            else
                nse[i]=s2.top();
            
            s2.push(i);
        }

        long long ans=0;
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            int left=i-pse[i];
            int right=nse[i]-i;
            long long sum=(1LL*left*right*arr[i])%mod;
            ans=(ans+sum)%mod;
        }
        return ans;
    }
};