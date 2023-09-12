class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector < int>> v(n+1);
        
            for (int i = 0; i <=n; i++)
            {
                v[i].resize(i + 1, 1);    //increase the size and push 1 to every                                                        elemement in the row
                for (int j = 1; j < i; j++)
                {
                    v[i][j] = v[i - 1][j-1] + v[i - 1][j];
                }
            }
        return v[n];
    }
};