class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int res=0;
        int temp=money;
        for(int i=0;i<2;i++){
            money=money-prices[i];
            if(money<0)
                return temp;
        }      
        if(money>=0)
            return money;
        return -1;
    }
};