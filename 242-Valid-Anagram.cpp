class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        //cout<<s<<" "<<t<<endl;
        return s==t;
    }
};