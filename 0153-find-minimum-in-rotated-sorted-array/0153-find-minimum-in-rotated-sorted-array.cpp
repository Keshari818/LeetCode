class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<res)
                res=nums[i];
        }
        return res;
    }
};