class Solution {
public:
    int reverse(int x) {
        int sign=1;
        if(x<0)
           sign=-1;
        x=abs(x);
        long ans=0;
        while(x>0){
            long res=x%10;
            ans=ans*10+res;
            x=x/10;
        }
        if(ans>INT_MAX || ans<INT_MIN)
            return 0;
        return ans*sign;
    }
};