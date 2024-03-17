class Solution {
public:
    int jump(vector<int>& nums) {
        // int maxi=nums[0],cnt=0;
        // for(int i=1;i<nums.size();i++){
        //     if(maxi<nums[i]){
        //         maxi=nums[i];
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        
        int mini=INT_MAX;
        int n=nums.size();
        int i=n-1,cnt=0;
        while(i>0){
            for(int j=i-1;j>=0;j--){
                if(nums[j]>=i-j){
                    mini=min(j,mini);
                }
            }
            cnt++;
            i=mini;
        }
        return cnt;
    }
};