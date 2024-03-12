class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> v;
        int cnt = 0;
        
        
        for (int num : nums) {
            mp[num]++;
        }
        
        
        priority_queue<pair<int, int>> pq;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            pq.push({it->second, it->first});
        }
        
        
        for (int i = 0; i < k; ++i) {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};
