class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        string temp;
        vector<char>v(n);
        for(int i=0;i<n;i++){
            v[i]=s[i];
            cout<<v[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]=='(')
                count++;
            else if(v[i]==')'){
                if(count>0)
                    count--;
                else 
                    v[i]='+';
            }
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==')')
                count++;
            else if(v[i]=='('){
                if(count>0)
                    count--;
                else 
                    v[i]='+';
            }
        }
        for(auto x:v){
            if(x=='+')
                continue;
            else 
                temp+=x;
        }
        return temp;
        
        
    }
};