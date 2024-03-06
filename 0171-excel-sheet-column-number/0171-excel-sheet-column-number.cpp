class Solution {
public:
    int titleToNumber(string t) {
        int n=t.size();
    
        int sum=0;
        for(int i=0;i<n;i++){
            int res=t[i]-64;
            sum+=pow(26,n-i-1)*res;
        }
        return sum;
    }
};