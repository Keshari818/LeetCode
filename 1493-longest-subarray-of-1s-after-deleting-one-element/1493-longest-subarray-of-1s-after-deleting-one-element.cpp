class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int head=0,tail=0,len=0,cnt=0;
        for(head=0;head<n;head++){
            if(nums[head]==0)
                cnt++;
            while(cnt>1){
                if(nums[tail]==0)
                    cnt--;
                tail++;
            }
            len=max(len,head-tail);
        }
        return len;
    }
};