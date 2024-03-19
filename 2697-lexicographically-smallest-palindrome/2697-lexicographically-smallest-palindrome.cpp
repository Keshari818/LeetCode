class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            if(s[i]-'a'>s[j]-'a'){
                s[i]=s[j];
                i++;
                j--;
            }
            else{
                s[j]=s[i];
                i++;j--;
            }
        }
        return s;
    }
};