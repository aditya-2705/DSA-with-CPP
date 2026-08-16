class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int n=s.size();
        int cnt=0;
        int i=0;
        for(int j=0;j<n;j++)
        {
            while((j-i+1)>k)
            {
                i++;
            }
            if(j-i+1==k)
            {
                int n=0;
                for(int k=i;k<=j;k++)
                {
                    n=n*10+(s[k]-'0');
                }
                if(n!=0 && num%n==0)
                    cnt++;
            }
        }
        return cnt;
    }
};