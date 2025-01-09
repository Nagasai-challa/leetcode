class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int>ans;
        for(int i=0;i<p.size();i++)
        {
            int num=p[i];
            for(int j=i+1;j<p.size();j++)
            {
                if(p[j]<=num){
                    num=num-p[j];
                    break;
                }
            }
            ans.push_back(num);
        }
        return ans;
    }
};