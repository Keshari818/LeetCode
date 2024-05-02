class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int l=0,r;
        int count=0;
        int sum=0;
        int n=arr.size();
        for(r=0;r<k;r++){
            sum+=arr[r];
            
        }
        
        if(sum>=k*t)
            count++;
        r--;
        while(r<n-1){
            sum-=arr[l];
            l++;
            r++;
            sum+=arr[r];
            if(sum>=k*t)
                count++;
        }
        return count;
    }
};