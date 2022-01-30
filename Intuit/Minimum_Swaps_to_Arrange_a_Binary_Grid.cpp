int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size(),cnt=0,j=0;
        vector<int> v(grid.size(),-1);
        for(int i=0;i<n;i++){
            for(j=0;j<n;j++){
                v[j]=(v[j]==-1)?(find(grid[j].crbegin(),grid[j].crend(),1) - grid[j].crbegin()) : v[j];
                if(v[j]!=-2 && v[j]>=n-i-1) 
                    break;
                cnt += (v[j]==-2)?0 : 1;
            }
            if (j>=n) 
                return -1;
            v[j] = -2;
        }
        return cnt;
    }
