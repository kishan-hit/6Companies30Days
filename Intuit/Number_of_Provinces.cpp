void dfs(vector<vector<int>>&isConnected,vector<vector<int>>& visited,int r,int c){
	if(r<0 || r> isConnected.size() || c<0 || c> isConnected.size()) 
        return;
	visited[r][c]=1;
	visited[c][r]=1;
	for(int i=0;i<isConnected[0].size();i++)
		if(!visited[c][i] && isConnected[c][i]==1) 
            dfs(isConnected,visited,c,i);
	    return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int res=0;
        vector<vector<int>> visited(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && isConnected[i][j] == 1) {
                    dfs(isConnected,visited,i,j);
                    ++res;
                }
            }
        }
        return res;
    }
