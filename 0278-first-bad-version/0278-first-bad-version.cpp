// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1;
        int end=n;
        int ans=0;
               // int  mid=s+(end-s)/2;
        while(s<=end)
        {
            int mid=s+(end-s)/2;
            bool flag=isBadVersion(mid);
            if(flag==false)
                s=mid+1;
            if(flag==true){
                end=mid-1;
                ans=mid;
            }
            
        }
        return ans;
    }
};