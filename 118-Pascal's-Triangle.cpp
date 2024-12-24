class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        res.push_back(vector<int>{1});
        for(int i=1;i<numRows;i++)
        {
            vector<int>row;
            row.push_back(1);
            vector<int>arr=res[i-1];
            if(arr.size()>1)
            {
                for(int j=0;j<arr.size()-1;j++){
                    cout<<arr[j]<<" "<<arr[j+1]<<endl;
                    row.push_back(arr[j]+arr[j+1]);
                }
            }
            row.push_back(1);
            res.push_back(row);
        }
        return res;
    }
};