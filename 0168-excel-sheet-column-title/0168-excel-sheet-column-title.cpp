class Solution {
public:
    string convertToTitle(int cN) {
        string res="";
        while(cN>0){
            int rem=(cN-1)%26;
            res.push_back('A'+rem);
            cN=(cN-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};