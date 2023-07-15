class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int upper=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        
        if(!binary_search(nums.begin(),nums.end(),target))
            return {-1,-1};
        
        // int start=lower-nums.begin();
        // int end=upper-nums.begin()-1;
        return {lower,upper};
    }
};