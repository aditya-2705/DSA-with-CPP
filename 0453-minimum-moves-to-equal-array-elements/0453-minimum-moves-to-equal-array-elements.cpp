class Solution {
public:
    int minMoves(vector<int>& nums) {
        int move=0;
        int min=*min_element(nums.begin(),nums.end());
        for(auto i:nums)
            move+=(i-min);
        return move;
    }
};