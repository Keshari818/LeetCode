class Solution
{
    public:
        vector<vector < int>> generateMatrix(int n)
        {
            vector<vector < int>> m(n, vector<int> (n));
            int ct = 1;
            int rs=0;
            int re=m.size()-1;
            int cs=0;
            int ce=m[0].size()-1;
            n = n * n;
            while (ct <= n)
            {
                if (ct <= n)
                {
                    for (int col = cs; col <= ce; col++)
                    {
                        m[rs][col] = ct;
                        ct++;
                    }
                    rs++;
                }
                if (ct <= n)
                {
                    for (int row= rs; row <= re; row++)
                    {
                        m[row][ce] = ct;
                        ct++;
                    }
                    ce--;
                    
                }
                if (ct <= n)
                {
                    for (int col = ce; col >= cs; col--)
                    {
                        m[re][col] = ct;
                        ct++;
                    }
                    re--;
                }
                if (ct <= n)
                {
                    for (int row = re; row >= rs; row--)
                    {
                        m[row][cs] = ct;
                        ct++;
                    }
                    cs++;
                }
            }
            return m;
        }
};