class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev=nums[0],pos=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=prev){
                nums[pos]=nums[i];
                prev=nums[i];
                pos++;
            }
        }
        return pos;
    }
};