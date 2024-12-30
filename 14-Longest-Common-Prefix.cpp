class Solution {
public:
    string LCP(string s1,string s2)
    {
        int n=min(s1.length(),s2.length());
        string res=\\;
        int i=0;
        while(i<n && s1[i]==s2[i]){
            res=res+s1[i];
            i++;
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            s=LCP(s,strs[i]);
            cout<<s<<endl;
        }
        return s;
    }
};