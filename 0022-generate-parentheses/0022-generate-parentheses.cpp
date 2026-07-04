class Solution {
public:
    vector<string>ans;

    void solve(int open, int close,string &temp,int n)
    {
        if(temp.size()>=2*n)
        {
            ans.push_back(temp);
            return;
        }

        if(open<n)
        {
            temp+='(';
            solve(open+1,close,temp,n);
            temp.pop_back();
        }
        if(close<open)
        {
            temp+=')';
            solve(open,close+1,temp,n);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string temp="";
        solve(0,0,temp,n);
        return ans;
    }
};