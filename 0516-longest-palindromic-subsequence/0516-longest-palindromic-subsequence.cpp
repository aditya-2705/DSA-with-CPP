class Solution {
public:
    vector<vector<int>>v;
    int solve(string &a,string &b,int i,int j)
    {
        if(i>=a.size() || j>=b.size())
            return 0;

        if(v[i][j]!=-1)
            return v[i][j];
        
        if(a[i]==b[j])
            return v[i][j]=1+solve(a,b,i+1,j+1);
        else
        {
            int excI=solve(a,b,i+1,j);
            int excJ=solve(a,b,i,j+1);
            return v[i][j]=max(excI,excJ);
        }
    }

    int longestPalindromeSubseq(string s) {
        v.assign(s.size()+5,vector<int>(s.size()+5,-1));
        string s2=s;
        reverse(s2.begin(),s2.end());
        int ans=solve(s,s2,0,0);
        return ans;
    }
};