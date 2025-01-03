class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1,m2;
        for(int i=0;i<ransomNote.size();i++){
            m1[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            m2[magazine[i]]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            char ch=it->first;
            if(m2[ch]<it->second){
                return false;
            }
        }
        return true;
    }
};