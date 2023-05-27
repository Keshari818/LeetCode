class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=1;
        int maxi=-1e9;
        for(int i=0;i<nums.size();i++){
            res*=nums[i];
            maxi=max(res,maxi);
            if(res==0)
                res=1;
        }
        res=1;
        for(int i=nums.size()-1;i>=0;i--){
            res*=nums[i];
            maxi=max(res,maxi);
            if(res==0)
                res=1;
        }
        return maxi;
    }
};