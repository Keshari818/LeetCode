class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int n=nums.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                cnt1++;
                v[(cnt1*2)-2]=nums[i];
            }
            else {
                cnt2++;
                v[(cnt2*2)-1]=nums[i];
            }
                
        }
        return v;
    }
};