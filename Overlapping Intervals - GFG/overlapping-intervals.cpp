//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
        int n=arr.size();
        vector<int>v;
        vector<vector<int>>b;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            v.push_back(arr[i][0]);
            int x=arr[i][1];
            while(i+1<n && x>=arr[i+1][0]){
                if(i+1<n)
                    x=max(x,arr[i+1][1]);
                i++;
            }
            v.push_back(x);
            b.push_back(v);
            v.clear();
        }
        return b;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends