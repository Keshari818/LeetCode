class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {       
//         int n=nums.size();
//         vector<int>v1(n,-1);
//         vector<int>v2(n,-1);
        
//         for(int i=0;i<n-1;i++){
//             int temp1=nums[i];
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]<nums[j])
//                     temp1=max(temp1,nums[j]);
//             }
//             if(temp1!=nums[i])
//                 v1[i]=temp1;
//         }
//         for(int i=n-1;i>0;i--){
//             int temp2=nums[i];
//             for(int j=i-1;j>=0;j--){
//                 if(nums[i]>nums[j])
//                     temp2=min(temp2,nums[j]);
//             }
//             if(temp2!=nums[i])
//                 v2[i]=temp2;
//         }
//         for(int i=0;i<n;i++){
//             if(v1[i]!=-1 && v2[i]!=-1)
//                 return true;
//         }
//         return false; 
        
        
        int n = nums.size();
    if (n < 3) return false;
    
    int small = INT_MAX, big = INT_MAX;
    
    for (int num : nums) {
        if (num <= small) {
            small = num;
        } else if (num <= big) {
            big = num;
        } else {
            return true;
        }
    }
    
    return false;
    }
};