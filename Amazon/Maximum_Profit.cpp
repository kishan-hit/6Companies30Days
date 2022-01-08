//Time Complexity: O(N*K)
    //Auxiliary Space: O(N*K)
    int maxProfit(int k, int n, int a[]) {
        // code here
        int t[k+1][n];
        for(int i=0;i<=k;i++)
            t[i][0] = 0;
        for(int j=0;j<n;j++)
            t[0][j] = 0;
        for(int i=1;i<=k;i++){
            int maxi = INT_MIN;
            for(int j=1;j<n;j++){
                maxi = max(maxi,t[i-1][j-1]-a[j-1]);
                t[i][j] = max(maxi+a[j],t[i][j-1]);
            }
        }
        return t[k][n-1];
    }
