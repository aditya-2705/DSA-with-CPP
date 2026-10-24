class Solution {
public:
    vector<int>v;
    int solve(int n)
    {
        if(n==0)
            return 1;
        
        if(v[n]!=-1)
            return v[n];
        
        int one=0;
        int two=0;
        one=solve(n-1);
        if(n-2>=0)
        two=solve(n-2);
        return v[n]=one+two;
    }

    int climbStairs(int n) {
        v.assign(n+5,-1);
        return solve(n);
    }
};