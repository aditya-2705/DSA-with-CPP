class Solution {
public:
    string s;
    int n;
    vector<int>v;

    int solve(int i)
    {
        if(i>=n)
            return 1;
        if(s[i]=='0')
            return 0;
        
        if(v[i]!=-1)
            return v[i];

        int one=0;
        int two=0;
        one+=solve(i+1);
        if(i+1<n && s.substr(i,2)<="26")
            two+=solve(i+2);
        
        return v[i]=one+two;
    }

    int numDecodings(string s) {
        this->s=s;
        this->n=s.size();
        v.assign(n+5,-1);
        int ans=solve(0);
        return ans;
    }
};