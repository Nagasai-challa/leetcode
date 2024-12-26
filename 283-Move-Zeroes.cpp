class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0,n=nums.size(),z=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
            else{
                z++;
            }
        }
        while(z>0)
        {
            nums[n-z]=0;
            z--;
        }
    }
};