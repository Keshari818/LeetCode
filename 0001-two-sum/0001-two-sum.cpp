class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int num=nums[i];
            int needMore=target-num;
            if(m.find(needMore) != m.end()){
                return{m[needMore],i};
            }
            m[num]=i;
        }
        return{-1,-1};
    }
};