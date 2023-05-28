//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        int cnt1=0, cnt2=0;
        int en1=INT_MIN, en2=INT_MIN;
        for(int i=0;i<n;i++){
            if(cnt1==0 && en2!=nums[i]){
                cnt1=1;
                en1=nums[i];
            }
            else if(cnt2==0 && en1!=nums[i]){
                cnt2=1;
                en2=nums[i];
            }
            else if(nums[i]==en1) cnt1++;
            else if(nums[i]==en2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>v;
        cnt1=0;
        cnt2=0;
        for(int i=0;i<n;i++){
            if(en1==nums[i]) cnt1++;
            if(en2==nums[i]) cnt2++;
        }
        int mini=(int)(n/3)+1;
        if(cnt1>=mini) v.push_back(en1);
        if(cnt2>=mini) v.push_back(en2);
        if(v.size()==0)
            return {-1};
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends