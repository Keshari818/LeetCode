class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        
        unordered_map<string,vector<string>>mp;
        for(auto str:strs){
            string temp=str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        }
    
        for(auto x:mp){
            v.push_back(x.second);
        }
        return v;
    }
};