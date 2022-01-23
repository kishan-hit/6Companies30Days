//Time Complexity: O(V + E)
    //Auxiliary Space: O(V)
    vector<bool> vis;
    int f,c,d;
    void dfs(vector<int> adj[],int v){
        vis[v]=true;
        for(auto x:adj[v]){
            if(f&&x==c&&v==d)
                continue;
            if(f&&x==d&&v==c)
                continue;
            if(!vis[x])
                dfs(adj,x);
        }
    }
    int isBridge(int n, vector<int> adj[], int C, int D) 
    {
        // Code here
        vis.assign(n+1,false);
        int c1=0,c2=0;
        f=0;
        for(int i=0;i<n;i++)
            if(!vis[i]){
                c1++;
                dfs(adj,i);
            }
        f=1,c=C,d=D;
        vis.assign(n+1,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c2++;
                dfs(adj,i);
            }
        }
        return c1!=c2;
    }
