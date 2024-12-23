class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
            int j=0;
            for(int i=0;i<m+n;i++)
            {
                if(j<n && b[j]<a[i]){
                    //cout<<b[j]<<" "<<a[i]<<endl;
                    int num=b[j];
                    for(int k=i;k<m+n;k++){
                        int tmp=a[k];
                        a[k]=num;
                        num=tmp;
                    }
                    j++;
                }
            }
            int i=n-1,index=m+n-1;
            while(i>=j){
                a[index]=b[i];
                i--;
                index--;
            }
    }
};