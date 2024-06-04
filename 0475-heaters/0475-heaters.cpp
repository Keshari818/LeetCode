class Solution {
public:
    bool isValid(int mid, vector<int> &houses, vector<int> &heaters)
    {
        int i = 0;
        int n = heaters.size();
        int j = 0;
        int m = houses.size();

        while (i < n and j < m)
        {
            if (abs(heaters[i] - houses[j]) <= mid)
                j++;
            else
                i++;
        }

        if(i < n) return true;
        return false;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        sort(houses.begin(), houses.end());
        int lb = 0;
        int ub = 1e9;
        int ans = -1;
        while (lb <= ub)
        {
            int mid = lb + (ub - lb) / 2;
            if (isValid(mid, houses, heaters))
            {
                ans = mid;
                ub = mid - 1;
            }
            else
                lb = mid + 1;
        }
        return ans;
    }
};