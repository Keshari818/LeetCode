class Solution {
public:
    
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        priority_queue<pair<int, char>> pq;
        
        for (char c : s) {
            mp[c]++;
        }
        
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        
        string str;
        while (!pq.empty()) {
            while (mp[pq.top().second]-- > 0) {
                str += pq.top().second;
            }
            pq.pop();
        }
        
        return str;
    }
};