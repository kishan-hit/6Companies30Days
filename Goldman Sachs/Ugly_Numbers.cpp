//Time Complexity: O(N)
//Auxiliary Space: O(N)

class Solution{
public:	
	ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> dp(n);
	    dp[0] = 1;
	    ull i2=0,i3=0,i5=0;
	    for(ull i=1;i<n;i++){
	        dp[i] = min({2*dp[i2],3*dp[i3],5*dp[i5]});
	        if(dp[i]==2*dp[i2])
	            ++i2;
	        if(dp[i]==3*dp[i3])
	            ++i3;
	        if(dp[i]==5*dp[i5])
	            ++i5;
	    }
	    return dp[n-1];
	}
};
