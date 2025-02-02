class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                char ch=st.top();
                if(ch==s[i]){
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
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};