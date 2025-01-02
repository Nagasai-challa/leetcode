class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        map<char,int>m2;
        int a=0;
        for(int i=0;i<t.length();i++)
        {
            char ch=t[i];
            if(m[ch]==0){
                if(m2[s[a]]!=0) return false;
                m[ch]=s[a];
                m2[s[a]]++;
                a++;
            }
            else{
                if(m[ch]!=s[a]){
                    return false;
                }
                a++;
            }
        }
        return true;
    }
};