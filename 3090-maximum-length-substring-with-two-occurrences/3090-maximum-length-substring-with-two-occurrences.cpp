class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int ans=0;
        vector<int>v(26,0);
        int i=0;
        for(int j=0;j<n;j++)
        {
            v[s[j]-'a']++;
            while(v[s[j]-'a']>2)
            {
                v[s[i]-'a']--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};