class Solution {
public:
    bool ispalidrom ( string s ){
        int p1 = 0 , p2 = s.size()-1 ;
        while(p1 <= p2 )
        {
            if( s[p1] != s[p2]) return false;
            ++p1;
            --p2;
        }
        return true;
    }
    int removePalindromeSub(string s){
        if(ispalidrom(s)) 
            return 1;
        return 2;
    }
};