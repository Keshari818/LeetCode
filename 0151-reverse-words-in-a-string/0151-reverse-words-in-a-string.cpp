class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size()-1;
        int i=0;
        while(i<=n && s[i]==' ') i++;
        while(n>=0 && s[n]==' ') n--;
        
        int l=i;
        int h=n;
        string ans;
        string word;
        for(int i=l;i<=h;i++){
            if(s[i]==' '){
                reverse(word.begin(),word.end());
                ans+=word+" ";
                while(i+1<n && s[i+1]==' ')
                    i++;
                word="";
            }
            else if(s[i]!=' ')
                word+=s[i];
        }
        if(word!= ""){
            reverse(word.begin(),word.end());
            ans+=word;
        }
        return ans;
    }
};