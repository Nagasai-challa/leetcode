class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m1,m2;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            m1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            int val=it->first;
            if(m2[val]!=0)
            {
                for(int j=0;j<min(it->second,m2[val]);j++)
                {
                    ans.push_back(val);
                }
            }
            //m2[val]=0;
        }
        return ans;
    }
};