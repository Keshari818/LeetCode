class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string ans="";
        for(int i=0;i<arr[0].length();i++){
            char ch = arr[0][i];
            
            bool match=true;
            
            for(int j=1;j<arr.size();j++){
                if(arr[j].length()<i || ch!=arr[j][i]){
                    match=false;
                    break;
                }
            }
            
            if(match==true)
                ans.push_back(ch);
            else
                break;
        }
        return ans;
    }
};