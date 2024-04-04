class Solution {
public:
    int maxDepth(string s) {
        int res=0;
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                res=max(res,count);
        
            }
            else if(s[i]==')')
                count--;
        }
        // if()
        return res;
    }
};