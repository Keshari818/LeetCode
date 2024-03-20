class Solution {
public:
    int convertTime(string curr, string c) {
        int n = ((c[0]-curr[0])*600) + ((c[1]-curr[1])*60) + ((c[3]-curr[3])*10) + c[4]-curr[4];
        return (n / 60) + (n % 60 / 15) + (n % 60 % 15 / 5) + (n % 60 % 15 % 5);
    }
};