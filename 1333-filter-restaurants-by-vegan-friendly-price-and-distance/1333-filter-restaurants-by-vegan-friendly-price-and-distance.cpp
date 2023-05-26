class Solution {
public:
    bool static cmp(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first) return a.second>b.second;
        else return a.first>b.first;
    }
    vector<int> filterRestaurants(vector<vector<int>>& arr, int g, int maxPrice, int maxDistance) {
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            if(g==0){
                if(arr[i][3]<=maxPrice && arr[i][4]<=maxDistance){
                    res.push_back(i);
                }
            }
            else{
                if(arr[i][2]==g && arr[i][3]<=maxPrice && arr[i][4]<=maxDistance){
                    res.push_back(i);
                }
            }
        }
        vector<pair<int,int>>v;
        for(auto x:res){
            v.push_back({arr[x][1],arr[x][0]});
        }
        sort(v.begin(),v.end(),cmp);
        res.clear();
        for(auto x:v){
            res.push_back(x.second);
        }
        return res;
    }
};