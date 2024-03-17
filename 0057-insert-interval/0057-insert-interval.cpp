class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& I, vector<int>& NI) {
        vector<vector<int>>ans;
        int i = 0;

        while (i < I.size() && I[i][1] < NI[0]) {
            ans.push_back(I[i]);
            i++;
        }

        while (i < I.size() && I[i][0] <= NI[1]) {
            NI = {min(NI[0], I[i][0]), max(NI[1], I[i][1])};
            i++;
        }
        ans.push_back(NI);

        while (i < I.size()) {
            ans.push_back(I[i]);
            i++;
        }

        return ans;
    }
};