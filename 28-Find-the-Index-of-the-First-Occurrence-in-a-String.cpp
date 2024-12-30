class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        for(int i=0;i<haystack.length();i++){
            if(i+n <= haystack.length()){
                string cur=haystack.substr(i,n);
                if(cur==needle) return i;
            }
        }
        return -1;
    }
};