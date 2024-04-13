class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<n && nums[i]==0){
                if(nums[j]==0)
                    j++;
                else{
                    swap(nums[i],nums[j]);
                    break;
                }
            }
            
        }
        
    }
};