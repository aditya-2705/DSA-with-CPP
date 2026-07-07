class Solution {
public:
    long long sumAndMultiply(int n) {
        string num=to_string(n);
        string ans="";
        long long sum=0;
        for(char ch:num)
        {
            if(ch!='0')
                ans+=ch;
        }
        if(ans.size()==0)
            return 0;
        
        for(char ch:ans)
            sum+=ch-'0';
        
        sum=sum*stoi(ans);

        return sum;
    }
};