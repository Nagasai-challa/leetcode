class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(isupper(s[i]) && isupper(st.top())){
                    st.push(s[i]);
                    continue;
                }
                char pre=(char)tolower(st.top());
                char cur=(char)tolower(s[i]);
                if((isupper(s[i]) || isupper(st.top())) && pre==cur){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};