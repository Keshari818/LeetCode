class Solution {
public:
    int hIndex(vector<int>& c) {
        int n=c.size();
        int l=0, h=n-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(c[mid]>=n-mid){
                ans=max(ans, n-mid);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};