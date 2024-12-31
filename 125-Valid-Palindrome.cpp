class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(isspace(s[i]) || !isalnum(s[i])){
                i++;
                if(isspace(s[j]) || !isalnum(s[j]) ){
                    j--;
                }
                continue;
            }
            else if(isspace(s[j]) || !isalnum(s[j])){
                j--;
                continue;
            }
            char ch=(char)tolower(s[i]);
            char ch2=(char)tolower(s[j]);
            if(ch!=ch2){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};