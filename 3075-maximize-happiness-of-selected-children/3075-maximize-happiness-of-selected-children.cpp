class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        // long long sum=0;
        // int n=h.size();
        // sort(h.begin(),h.end());
        // for(int i=0;i<k;i++){
        //     int a=h[n-i-1];
        //     sum=sum+a;
        //     for(int j=0;j<n-i-1;j++){
        //         if(h[j]==0)
        //             continue;
        //         h[j]=h[j]-1;
        //     }
        // }
        // return sum;
        
        sort(begin(h), end(h), greater<int>());
        int i = 0;
        long long res = 0;

        while(k--) {
            h[i] = max(h[i] - i, 0);
            res += h[i++];
        }

        return res;
    }
};