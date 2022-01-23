int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    
	    //Time Complexity: O(N*|sum of array elements|)
	    //Auxiliary Space: O(N*|sum of array elements|)
	    
	    int sum = 0;
	    for(int i=0;i<n;i++)
	        sum += arr[i];
	    int dp[n+1][sum+1];
	    for(int i=0;i<=sum;i++)
	        dp[0][i] = 0;
	    for(int i=0;i<=n;i++)
	        dp[i][0] = 1;
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1] <= j)
	                dp[i][j] = (dp[i-1][j] || dp[i-1][j-arr[i-1]]);
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    vector<int> v;
	    for(int i=0;i<=sum/2;i++)
	        if(dp[n][i] == 1)
	            v.push_back(i);
	    int res = INT_MIN;
	    for(int i=0;i<v.size();i++)
	        res = max(res,v[i]);
	    return sum - 2*res;
	} 
