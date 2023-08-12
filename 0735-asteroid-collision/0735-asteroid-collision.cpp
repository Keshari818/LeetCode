class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        stack<int> st;
        int n = asteroids.size();

        for (int i=0; i<n; i++) {
            if (st.empty()) {
                st.push(asteroids[i]);
                continue;
            }
            
            bool flag = 1;
            while (!st.empty() && st.top() >= 0 && asteroids[i] < 0) {
                if (abs(asteroids[i]) > st.top()) st.pop();
                else if (abs(asteroids[i]) < st.top()) {
                    flag = 0;
                    break;
                }
                else {
                    flag = 0;
                    st.pop();
                    break;
                }
            }

            if (flag) st.push(asteroids[i]);
        }

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }

        reverse(begin(res), end(res));
        return res;
    }
};