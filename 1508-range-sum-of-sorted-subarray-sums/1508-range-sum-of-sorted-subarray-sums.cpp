class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>v;
        vector<int>v2;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                if(i==j)
                    sum+=nums[i];
                else
                    sum+=nums[j];
                v.push_back(sum);
            }
        }
        long long sum=0;
        sort(begin(v),end(v));
        for(int i=left-1;i<right;i++){
            sum+=v[i];
            sum=sum%1000000007;
        }
        return sum%1000000007;
    }
};