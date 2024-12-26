class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if((m.find(i)==m.end())) return i;
        }
        return 0;
    }
};