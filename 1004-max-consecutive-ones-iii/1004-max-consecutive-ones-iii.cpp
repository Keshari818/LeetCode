class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int n=arr.size();
        int l=0,r=0;
        int ans=0;
        while( r<n){
            if(arr[r]==1){
                r++;
                continue;
            }
            if(k>0){
                k--;
                r++;
            }
            else{
                ans=max(ans,r-l);
                while(l<=r && k==0){
                    if(arr[l]==0)
                       k++;
                    l++;
                }
            
            }
        }
        ans=max(ans,r-l);
        return ans;
    }
};