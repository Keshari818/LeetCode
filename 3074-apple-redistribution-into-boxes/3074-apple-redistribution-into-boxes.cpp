class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        sort(cap.begin(), cap.end(), greater<int>());
        int sum = 0, i;
        for(auto a: apple) sum += a;
        for(i = 0; i < cap.size() && sum > 0; ++i) sum -= cap[i];
        return i;
    }
};