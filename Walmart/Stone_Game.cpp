bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int>>dp(n,vector<int>(n));  
        for(int k=0;k<n;k++)
            for(int i=0,j=k;j<n;i++,j++){
                if(k == 0) 
                    dp[i][j] = piles[i];
                else if(k==1) 
                    dp[i][j] = max(piles[i],piles[j]);
                else{
                    int temp1 = piles[i] + min(dp[i+2][j], dp[i+1][j-1]);
                    int temp2 = piles[j] + min(dp[i+1][j-1], dp[i][j-2]);
                    dp[i][j] = max(temp1,temp2); 
                }
            }
        return dp[0][n-1];
    }
