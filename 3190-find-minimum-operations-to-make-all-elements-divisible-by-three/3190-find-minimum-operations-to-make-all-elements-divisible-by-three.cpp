class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int n=nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i]%3 == 1)
                count++;
            else if(nums[i]%3 == 2){
                count++;
            }
        }
        return count;
    }
};