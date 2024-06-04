class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> m;
        int length = 0;
        
        for (char c : s) {
            if (m.find(c) != m.end()) {
                m.erase(c);
                length += 2;
            } else {
                m.insert(c);
            }
        }
        if (!m.empty()) {
            length += 1;
        }
        return length;
    }
};