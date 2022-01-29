//Time complexity: O(n^2)
int getMoneyAmount(int n) {
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i=1;i<n;i++){
            for(int j=n-i-1;j>=0;j--){
                int l=j,r=j+i;
                int mini=INT_MAX,minm;
                for(int k=l;k<=r;k++){
                    int temp1 = (l<=k-1 ? dp[l][k-1] : 0);
                    int temp2 = (k+1<=r ? dp[k+1][r] : 0);
                    minm = (k+1) + max(temp1,temp2);
                    mini = min(mini,minm);
                }
                dp[l][r] = mini;
            }
        }
        return dp[0][n-1];
    }
