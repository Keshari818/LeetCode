class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long res=0;
        int temp=x;
        while(x>0){
            int rem=x%10;
            res=res*10+rem;
            x=x/10;
        }
        if(res!=temp)
            return false;
        return true;
    }
};