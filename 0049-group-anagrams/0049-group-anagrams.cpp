class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>f;
        for(auto ch:strs)
        {
            string key=ch;
            sort(key.begin(),key.end());
            f[key].push_back(ch);
        }
        vector<vector<string>>ans;
        for(auto it:f)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};