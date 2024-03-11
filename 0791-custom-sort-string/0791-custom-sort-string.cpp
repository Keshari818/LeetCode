class Solution {
public:
    string customSortString(string order, string s) {
        int count[26] = {0};
        for (char ch : s)
            count[ch - 'a']++;


        string res;
        for (char ch : order) {
            res += string(count[ch - 'a'], ch);
            count[ch - 'a'] = 0; 
        }

        for (int i = 0; i < 26; i++) {
            res += string(count[i], 'a' + i);
        }

        return res;
    }
};