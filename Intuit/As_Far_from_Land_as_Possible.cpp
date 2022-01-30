int maxDistance(vector<vector<int>>& grid) {
        deque<pair<int,int>> q;
        int depth=-1,dir[5]={1,0,-1,0,1};
        bool vis[101][101] = {0};
        for(int i=0;i<grid.size();++i)
            for(int j=0;j<grid[0].size();++j)
                if(grid[i][j] == 1){
                    q.push_back({i,j});
                    vis[i][j] = true;
                }
        if(q.size()==grid.size()*grid[0].size() || q.size()==0) 
            return -1;
        while(!q.empty()){
            ++depth;
            int n=q.size();
            while(n--){
                pair<int,int> cur = q.front();
                q.pop_front();
                for(int a=0;a<4;++a){
                    int i = cur.first + dir[a], j = cur.second + dir[a+1];
                    if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||vis[i][j]) 
                        continue;
                    q.push_back({i,j});
                    vis[i][j] = true;
                }
            }
        }
        return depth;
    }
