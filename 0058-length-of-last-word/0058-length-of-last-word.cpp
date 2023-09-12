class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        int n=s.size();
        reverse(s.begin(),s.end());
        int i=0;
        while(i<n && cnt==0 && s[i]==' ')
            i++;
        while(i<n && s[i]!=' '){
            cnt++;
            i++;
        }
        return cnt;;
    }
};