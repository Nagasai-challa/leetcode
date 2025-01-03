class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>m;
        int odd=0;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second%2==0){
                cnt+=it->second;
            }
            else if(odd==0){
                cnt+=it->second;
                odd++;
            }
            else{
                cnt=cnt+(it->second-1);
            }
        }
        return cnt;
    }
};