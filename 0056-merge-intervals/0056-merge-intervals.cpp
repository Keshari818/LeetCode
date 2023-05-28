class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& n) {
        vector<int>v;
        vector<vector<int>>b;
        sort(n.begin(),n.end());
        for(int i=0;i<n.size();i++){
            v.push_back(n[i][0]);
            int x=n[i][1];
            while(i+1<n.size() && x>=n[i+1][0]){
                
                // i++;
                if(i+1<n.size())
                    x=max(x,n[i+1][1]);
                i++;
            }
            v.push_back(x);
            b.push_back(v);
            v.clear();
        }
        return b;
    }
};