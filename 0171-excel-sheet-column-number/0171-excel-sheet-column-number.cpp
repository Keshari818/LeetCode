class Solution {
public:
    int titleToNumber(string t) {
        // reverse(t.bgein(),t.end());
        int n=t.size();
        // cout<<n<<endl;
        int sum=0;
        for(int i=0;i<n;i++){
            int res=t[i]-64;
            sum+=pow(26,n-i-1)*res;
            cout<<res<<endl;
        }
        return sum;
    }
};