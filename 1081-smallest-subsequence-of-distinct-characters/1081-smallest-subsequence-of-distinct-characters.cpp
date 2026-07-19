class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>v(26,0);
        vector<int>taken(26,0);
        stack<char>st;
        for(char ch:s)
            v[ch-'a']++;

        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']--;

            if(taken[s[i]-'a']==1)
                continue;

            while(!st.empty() && s[i]<st.top() && v[st.top()-'a']>0)
            {
                taken[st.top()-'a']=0;
                st.pop();
            }
            st.push(s[i]);
            taken[s[i]-'a']=1;
        }

        string ans="";
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};