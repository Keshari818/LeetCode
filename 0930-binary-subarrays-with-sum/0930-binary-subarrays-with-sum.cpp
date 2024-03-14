class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> cnt;
        cnt[0] = 1;
        int curr_sum = 0;
        int total_subarrays = 0;

        for (int num : nums) {
            curr_sum += num;
            if (cnt.find(curr_sum - goal) != cnt.end()) {
                total_subarrays += cnt[curr_sum - goal];
            }
            cnt[curr_sum]++;
        }

        return total_subarrays;
    }
};