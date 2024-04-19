class Solution {
public:
    void ff(int i, int j, vector<vector<char>>&grid){
        if(grid[i][j]=='2'|| grid[i][j]=='0')
            return;
        grid[i][j]='2';
        
       
        if(i-1>=0)    
            ff(i-1,j,grid);
        if(i+1<grid.size())
            ff(i+1,j,grid);
        if(j+1<grid[0].size())
            ff(i,j+1,grid);
        if(j-1>=0)
            ff(i,j-1,grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    cout<<i<<endl;
                    cout<<j<<endl;
                    ff(i,j,grid);
                }
                else if(grid[i][j]=='2' || grid [i][j]=='0')
                    continue;
            }
        }
        return count;
    }
};