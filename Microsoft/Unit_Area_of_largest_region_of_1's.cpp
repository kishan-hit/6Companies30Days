int countArea(vector<vector<int>>& grid, int x, int y) {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()) 
            return 0;
        if(!grid[x][y]) 
            return 0;
        grid[x][y] = 0;
        return 1 + countArea(grid, x - 1, y) 
                 + countArea(grid, x + 1, y)
                 + countArea(grid, x, y - 1)
                 + countArea(grid, x, y + 1)
                 + countArea(grid, x-1,y-1)
                 + countArea(grid, x+1, y + 1)
                 + countArea(grid, x+1,y-1)
                 + countArea(grid, x-1,y+1);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int maxi = 0;
        for(int i=0;i<grid.size();i++) 
            for(int j=0;j<grid[0].size();j++) 
                if(grid[i][j])
                    maxi = max(countArea(grid, i, j),maxi);
        return maxi;
    }
