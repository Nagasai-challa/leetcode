class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]==s[a]){
                a++;
            }
        }
        return a==s.length();
    }
};