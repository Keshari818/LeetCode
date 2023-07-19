class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        string ans="";
        int cnt=0;
        int flag =true;
        for(int i=0;i<n;i++){
            if(s[i]=='(') cnt++;
            else if(s[i]==')') cnt--;
            if(cnt ==1 && flag==true){
                flag =false;
                continue;
            }
            if(cnt ==0){
                flag =true;
                continue;
            }
            else if(cnt>0)
                ans.push_back(s[i]);
        }
        return ans;
    }
};