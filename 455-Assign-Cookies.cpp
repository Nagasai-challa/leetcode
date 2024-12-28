class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
            if(s.size()==0) return 0;
            int cookieSize=s.size()-1;
            int childSize=g.size()-1;
            sort(g.begin(),g.end());
            sort(s.begin(),s.end());
            int cnt=0;
            while(cookieSize>=0 && childSize>=0)
            {
                if(s[cookieSize]>=g[childSize]){
                    cnt++;
                    cookieSize--;
                    childSize--;
                }
                else{
                    childSize--;
                }
            }
            return cnt;
    }
};