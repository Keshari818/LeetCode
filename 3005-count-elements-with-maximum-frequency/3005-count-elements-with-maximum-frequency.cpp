class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi = 0;
        for (auto x : mp) {
            if (x.second > maxi) {
                maxi = x.second;
            }
        }

        for(auto x : mp){
            if(x.second==maxi)
                sum+=maxi;
        }
        return sum;
        
    }
};