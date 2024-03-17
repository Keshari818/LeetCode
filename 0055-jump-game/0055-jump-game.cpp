class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)
            return true;
        int i=n-1;
        int temp=i;
        for(int j=n-2;j>=0;j--){
            if(nums[j]+j>=i){
                temp=j;
                i=temp;
            }
            if(temp==0)
                return true;
        }
        return false;
    }
};