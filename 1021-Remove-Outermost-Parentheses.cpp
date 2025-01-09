class Solution {
public:
    string removeOuterParentheses(string s) {
        int balanace=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                if(balanace>0){
                    ans=ans+s[i];
                }
                balanace++;
            }
            else{
                balanace--;
                if(balanace>0){
                    ans=ans+s[i];
                }
            }
        }
        return ans;
    }
};