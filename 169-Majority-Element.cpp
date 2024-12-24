class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=0,num=INT_MIN,cnt=0,res;
        for(int i=0;i<nums.size();i++)
        {
            if(num==INT_MIN){
                num=nums[i];
                cnt=1;
            }
            else if(nums[i]==num){
                cnt++;
            }
            else{
                
                if(cnt>mx){
                    mx=cnt;
                    res=num;
                }
                num=nums[i];
                cnt=1;
            }
        }
        if(cnt>mx) res=num;
        return res;
    }
};