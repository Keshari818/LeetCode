class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        typedef long long ll;
        vector<ll> ugly(n,-1);
        ll i=0;
        cout<<primes.size();
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        pq.push(1);
        while(!pq.empty()&&ugly[n-1]==-1)
        {
            ll temp=pq.top();
            ugly[i++]=temp;
            for(auto &x:primes)
            {
                pq.push(temp*x);
            }
            while(!pq.empty()&&temp==pq.top())
            {
                pq.pop();
            }
        }
        return ugly[n-1];
    }
};