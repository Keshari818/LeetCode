class Solution {
public:
    int dp[59];
    int sol(int a){
        if(a==1)
            return 1;
        if(dp[a]!=-1)
            return dp[a];
        int res=INT_MIN;
        for(int i=1;i<=a-1;i++){
           int product=i*max(a-i,sol(a-i));
           res=max(res,product);
        } 
        return dp[a]=res;
    }
    int integerBreak(int n) {
        memset(dp,-1, sizeof(dp));
        return sol(n);
    }
};