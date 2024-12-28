class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        vector<int>ans;
        set<int>s;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            s.insert(nums2[i]);
        }
        for(auto it=s.begin();it!=s.end();it++){
            if(m[*it]!=0){
                ans.push_back(*it);
            }
        }
        return ans;
    }
};