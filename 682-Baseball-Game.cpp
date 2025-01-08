class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int>ans;
        for(int i=0;i<o.size();i++)
        {
            if(o[i]==\+\){
                int sum1=ans.top();ans.pop();
                int sum2=ans.top();ans.pop();
                ans.push(sum2);ans.push(sum1);
                ans.push(sum1+sum2);
            }
            else if(o[i]==\D\){
                int sum=ans.top();
                ans.push(sum*2);
            }
            else if(o[i]==\C\){
                ans.pop();
            }
            else{
                int num=stoi(o[i]);
                ans.push(num);
            }
        }
        int sum=0;
        while(!ans.empty())
        {
            sum+=ans.top();
            ans.pop();
        }
        return sum;
    }
};