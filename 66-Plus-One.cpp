class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        int i=digits.size()-1;
        while(i>=0 && carry!=0)
        {
            int sum=digits[i]+carry;
            if(sum>10){
                carry=1;
                digits[i]=0;
            }
            else{
                digits[i]=sum;
                carry=0;
            }
            i--;
        }
        
        vector<int>res;
        if(carry!=0){
            res.push_back(1);
            res.insert(res.begin()+1,digits.begin(),digits.end());
            return res;
        }
        return digits;
    }
};