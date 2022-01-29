Node* search(vector<vector<int>>& grid,int s1,int s2,int size){
        if(size<1)
            return NULL;
        bool va=grid[s1][s2];
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(grid[s1+i][s2+j]!=va){
                    size=size/2;
                    Node *M = new Node(true, false, NULL, NULL, NULL, NULL);
                    M->topLeft=search(grid,s1,s2,size);
                    M->topRight=search(grid,s1,s2+size,size);
                    M->bottomLeft=search(grid,s1+size,s2,size);
                    M->bottomRight=search(grid,s1+size,s2+size,size);
                    return M;
                }
            }
        }
        return(new Node(va,true,NULL, NULL, NULL, NULL));
    }
    Node* construct(vector<vector<int>>& grid) {
        if(grid.size() == 0)
            return NULL;
        return(search(grid,0,0,grid.size()));
    }
