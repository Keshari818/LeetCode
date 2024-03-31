class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long res = 1, size = 1;
        for (int i = 1; i < nums.size(); ++i) {
            size = nums[i - 1] == nums[i] ? 1 : size + 1;
            res += size;
        }
        return res;
    }
};