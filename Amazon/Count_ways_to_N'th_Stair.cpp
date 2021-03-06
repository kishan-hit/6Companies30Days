public:
    
    //Time Complexity: O(N)
    //Auxiliary Space: O(N)
    
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        int dp[m+1]={0};
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=m;i++)
            dp[i] = dp[i-2] + 1;
        return dp[m];
    }
