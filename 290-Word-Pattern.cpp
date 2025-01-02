class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        string word="";
        for(int i=0;i<s.length();i++)
        {
            if(isspace(s[i])){
                v.push_back(word);
                word="";
            }
            else{
                word=word+s[i];
            }
        }
        if(word.length()!=0) v.push_back(word);
        map<string,char>m1;
        map<char,int>m2;
        int a=0;
        for(int i=0;i<v.size();i++)
        {
            if(m1.find(v[i])==m1.end()){
                //cout<<v[i]<<" "<<"HELLO"<<endl;
                if(m2[p[a]]!=0) return false;
                m1[v[i]]=p[a];
                m2[p[a]]++;
                a++;
            }
            else{
                //cout<<v[i]<<" "<<"HELLO2"<<endl;
                if(m1[v[i]]!=p[a]) return false;
                a++;
            }
        }
        //cout<<a<<endl;
        return p.size()==a;
    }
};