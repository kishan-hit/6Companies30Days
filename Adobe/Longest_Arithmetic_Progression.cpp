int lengthOfLongestAP(int A[], int n) {
        //Time Complexity: O(N2)
        //Auxiliary Space: O(N2)
        
        // code here
        int res=0;
        if(n==1)
            return 1;
        vector<unordered_map<int,int>> dp(n);
        for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
                int dif = A[i]-A[j];
                if(dp[j].find(dif)==dp[j].end())
                   dp[i][dif] = 2;
                else
                   dp[i][dif] = dp[j][dif]+1;
               res = max(res,dp[i][dif]);
           }
       }
        return res;
    }
