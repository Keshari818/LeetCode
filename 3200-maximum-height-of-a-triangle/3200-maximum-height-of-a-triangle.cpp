class Solution {
public:
    int maxHeightOfTriangle(array<int, 2> c) {
        int ans = 0;
        for (int i = 1; c[i & 1] >= i; ++i) {
            c[i & 1] -= i;
            ++ans;
        }   
        return ans;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(maxHeightOfTriangle({red, blue}),maxHeightOfTriangle({blue, red}));
    }
};