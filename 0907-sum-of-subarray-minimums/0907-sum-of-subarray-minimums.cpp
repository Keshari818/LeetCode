class Solution {
public:
    int mod=1e9+7;
    int sumSubarrayMins(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        int n=nums.size();
        stack<int> st;
        long long ans=0;
        for(int i=0;i<=n;i++){
            int el=nums[i];
            while(!st.empty() && ((i==n) || nums[st.top()]>nums[i]) ){
                int ind=st.top();
                st.pop();
                int l=0;
                if(st.empty()){
                    l=ind+1;
                }else{
                    l=ind-st.top();
                }
                int r=i-ind;
                ans=(ans+(long long )nums[ind]*l*r)%mod;
            }
            st.push(i);
        }
        return ans%mod;
    }
    
};