class Solution {
public:
    int numIslands(vector<vector<char>> &grid) {
        int ans = 0;
        if(grid.empty() || grid[0].empty())
            return ans;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i ++)
        {
            for(int j = 0; j < n; j ++)
            {
                if(grid[i][j] == '1')
                {
                    find(grid, i, j);
                    ans ++;
                }
            }
        }
        return ans;
    }

    void find(vector<vector<char>> &grid, int i, int j)
    {
        grid[i][j] = '0';
        if(i > 0 && grid[i-1][j] == '1')
            find(grid, i-1, j);
        if(i < grid.size()-1 && grid[i+1][j] == '1')
            find(grid, i+1, j);
        if(j > 0 && grid[i][j-1] == '1')
            find(grid, i, j-1);
        if(j < grid[0].size()-1 && grid[i][j+1] == '1')
            find(grid, i, j+1);
    }
};
