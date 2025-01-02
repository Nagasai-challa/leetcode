class Solution {
public:
    string convertToTitle(int columnNumber) {
        map<int,char>m;
        char ch='A';
        int cnt=0;
        while(cnt<=25)
        {
            m[cnt]=ch;
            cnt++;
            ch++;
        }
        int num=columnNumber;
        string ans="";
        while(num>0)
        {
            num--;
            int letter=num%26;
            ans=m[letter]+ans;
            num=num/26;
            
        }
        return ans;
    }
};