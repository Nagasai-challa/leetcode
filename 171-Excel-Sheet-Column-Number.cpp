class Solution {
public:
    map<char,int>m;
    char ch='A';
    int num=1;
    int titleToNumber(string columnTitle) {
        while(num<=26)
        {
            m[ch]=num;
            ch=ch+1;
            num+=1;
        }
        int ans=0,exp=0;
        for(int i=columnTitle.length()-1;i>=0;i--)
        {
            ans=ans+(m[columnTitle[i]]*pow(26,exp));
            exp++;
        }
        return ans;
    }
};