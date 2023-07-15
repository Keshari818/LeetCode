class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        // lb=MAX_INT;
        int temp=nums.size();
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]>=target){
                temp=min(mid,temp);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return temp;
    }
};