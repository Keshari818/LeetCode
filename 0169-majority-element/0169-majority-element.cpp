class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int e=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0)
                e=nums[i];
            if(e==nums[i])
                count++;
            else
                count--;
        }
        return e;
    }
};