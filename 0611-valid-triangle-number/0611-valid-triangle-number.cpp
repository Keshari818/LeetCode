typedef vector<int>::iterator vit;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if ( nums.size() < 3 ) return 0;
        vit b = nums.begin(), e = nums.end();
        sort(b, e);
        int res = 0;
        for ( vit k = b+2; k != e; ++k ){
            vit i = b, j = k-1;
            while ( i < j ){
                if ( *i + *j > *k ){
                    res += j - i;
                    --j;
                }
                else{
                    ++i;
                }
            }
        }
        return res;
    }
};