class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int s=0,e=sqrt(c);
        while(s<=e){
            long long int ans=s*s+e*e;
            if(ans>c){
                e--;
            }
            else if(ans<c){
                s++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};