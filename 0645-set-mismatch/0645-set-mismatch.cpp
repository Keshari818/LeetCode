class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();       
        unordered_map<int, int>m;
        for(int i =0; i< n ; i++)
            m[nums[i]]++;

        vector<int>ans(2);
        for(auto& i: m){
            if(2 == i.second){
                ans[0] = i.first;
                break;
            }
        }
        for(int i =1; i< n+1; i++){
            if(0 == m[i]){
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
};