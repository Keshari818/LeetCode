class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int res = 0;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            int temp = i, cnt = 0;
            while(temp) {
                if(temp%2 == 1) 
                    cnt++;
                temp /= 2;
            }
            if(cnt == k) 
                res += nums[i];
        }
        return res;
    }
};