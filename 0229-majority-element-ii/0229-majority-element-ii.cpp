class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        unordered_map<int,int>::iterator iter;
        for(iter=m.begin();iter!=m.end();iter++){
            if(iter->second>n/3)
                v.push_back(iter->first);
        }
        return v;
    }
};