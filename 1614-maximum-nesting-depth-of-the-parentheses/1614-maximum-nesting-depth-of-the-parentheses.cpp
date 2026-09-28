class Solution {
public:
    int maxDepth(string s) {
        int balance=0;
        int ans=0;
        for(auto &ch:s)
        {
            if(ch=='(')
                balance++;
            else if(ch==')')
                balance--;

            ans=max(ans,balance);
        }
        return ans;
    }
};