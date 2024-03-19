class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=nums[n-1];
        
        int sum=((k-1)*k)/2;
        return k*a+sum;
    }
};