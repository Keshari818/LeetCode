class Solution {
public:
    string reverseOnlyLetters(string s) {
        int low = 0;
        int high = s.size()-1;
        while(low<high)
        {
            if(isalpha(s[low]))
            {
                if(isalpha(s[high])) swap(s[low++],s[high--]);
                else high--;
            }
            else low++;
        }
        return s;
    }
};