class Solution {
public:
    string multiply(string num1, string num2) {
        int x = num1.size();
        int y = num2.size();
        string ans(x + y, '0');
        for(int i=x-1;i>=0;i--){
            for(int j = y - 1; j >= 0; j--){
                int p = (num1[i] - '0') * (num2[j] - '0') + (ans[i + j +1] - '0');
                ans[i+j+1] = p % 10 + '0';
                ans[i+j] += p / 10 ;
            }
        }
        for(int p = 0; p < x+y; p++){
            if(ans[p] !='0')
                return ans.substr(p);
        }
        return "0";
    }
};