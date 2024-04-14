class Solution {
public:
    string findLatestTime(string s) {
         
        for(int i=0;i<5;i++){
            if(s[i]=='?'){
                if(i==0){
                    if(s[i+1]<='1')
                        s[i]='1';
                    else if(s[i+1]=='?')
                        s[i]='1';
                    else
                        s[i]='0';
                }
                else if(i==1){
                    if(s[i-1]=='0')
                        s[i]='9';
                    else
                        s[i]='1';
                }
                else if(i==3){
                    s[i]='5';
                }
                else if(i==4){
                    s[i]='9';
                }
            }
        }
        return s;
    }
};