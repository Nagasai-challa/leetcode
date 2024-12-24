class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res;
        res.push_back({1});
        for(int i=0;i<rowIndex;i++){
            vector<int>row;
            row.push_back(1);
            vector<int>arr=res[i];
            if(arr.size()>1)
            {
                for(int j=0;j<arr.size()-1;j++){
                    row.push_back(arr[j]+arr[j+1]);
                }
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res[rowIndex];
    }
};