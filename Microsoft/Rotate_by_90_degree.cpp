void rotate(vector<vector<int> >& matrix)
{
    //Time Complexity: O(N*N)
    // Auxiliary Space: O(1)


    // Your code goes here
    int n=matrix.size();
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            swap(matrix[i][j],matrix[j][i]);
    for(int i=0;i<n;i++){
        int s=0,e=n-1;
        while(s<e)
            swap(matrix[s++][i],matrix[e--][i]);
    }
