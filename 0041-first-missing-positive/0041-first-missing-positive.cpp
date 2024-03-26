class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>::iterator it;
//         for(int i=1;i<=n+1;i++){

//             it=find(nums.begin(),nums.end(),i);
//             if(it!=nums.end())
//                 continue;
//             else 
//                 return i;
//         }
//         return -1;
        
        
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Find the first missing positive integer
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        
        return n + 1;
    }
};