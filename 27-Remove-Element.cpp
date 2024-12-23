class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                s.push_back(nums[i]);
            }
        }
        int i=0;
        for(auto it=s.begin();it!=s.end();it++){
            nums[i]=*it;
            i++;
        }
        return s.size();
    }
};