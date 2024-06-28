class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size())
            return false;

        int frequency[26] = {0};
        for (auto ch : s1)
            frequency[ch - 'a']++;

        int start = 0;
        int current_frequency[26];
        for (int end = 0; end < s2.size(); end++) {
            int end_char = s2[end] - 'a';
            current_frequency[end_char]++;
            while (current_frequency[end_char] > frequency[end_char]) {
                current_frequency[s2[start] - 'a']--;
                start++;
            }
            if (end - start + 1 == s1.size())
                return true;
        }
        return false;
    }
};