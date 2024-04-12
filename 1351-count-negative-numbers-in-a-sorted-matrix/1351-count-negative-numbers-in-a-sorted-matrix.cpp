class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            int j=0;
            while(j<m && grid[i][j]>=0){
                j++;
            }
            if(j<m && grid[i][j]<0)
                sum+=(m-j);
            
        }
        return sum;
    }
};