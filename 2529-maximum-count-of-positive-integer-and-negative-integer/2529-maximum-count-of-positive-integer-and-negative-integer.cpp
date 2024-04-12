class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        for(auto x:nums){
            if(x>0){
                cnt1++;
            }
            else if(x<0)
                cnt2++;
            else 
                continue;
        }
        if(cnt2>cnt1)
            return cnt2;
        return cnt1;
    }
};