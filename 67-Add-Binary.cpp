class Solution {
public:
    string addBinary(string a, string b) {
            int carry=0;
            int  i=a.length()-1;
            int j=b.length()-1;
            string ans="";
            while(i>=0 || j>=0 || carry>0)
            {
                int bit1=0,bit2=0;
                if(i>=0){
                    bit1=a[i]-'0';i--;
                }
                if(j>=0){
                    bit2=b[j]-'0';j--;
                }
                carry=carry+bit1+bit2;
                ans = char(carry % 2 + '0') + ans;
                carry /= 2;
            }
            return ans;
    }
};