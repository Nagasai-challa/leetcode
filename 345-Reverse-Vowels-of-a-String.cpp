class Solution {
public:
    bool is(char ch)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(is(s[i]) && is(s[j])){
                swap(s[i],s[j]);
                i++;j--;
            }
            if(!is(s[i])){
                i++;
            }
            if(!is(s[j])){
                j--;
            }
        }
        return s;
    }
};