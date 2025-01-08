class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
            for(int i=0;i<nums1.size();i++){
                int flag=0,num=-1;
                for(int j=0;j<nums2.size();j++){
                    if(flag!=0 && nums2[j]>nums1[i]){
                        num=nums2[j];
                        break;
                    }
                    if(nums2[j]==nums1[i]){
                            flag++;
                    }
                }
                ans.push_back(num);
            }
            return ans;
    }
};