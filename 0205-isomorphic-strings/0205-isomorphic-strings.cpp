class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i])
                    return false;
            }
            m[s[i]]=t[i];
        }
        m.clear();
        for(int i=0;i<t.size();i++){
            if(m.find(t[i])!=m.end()){
                if(m[t[i]]!=s[i])
                    return false;
            }
            m[t[i]]=s[i];
        }
        return true;
    }
};