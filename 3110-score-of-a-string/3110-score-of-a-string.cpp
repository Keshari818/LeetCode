class Solution {
public:
    int scoreOfString(string s) {
        int sum=0,n=s.size();
        vector<int>v;
        for(auto x:s){
            char c=x;
            v.push_back(int(c));
        }
        for(int i=1;i<n;i++){
            sum+=abs(v[i]-v[i-1]);
        }
        return sum;
    }
};