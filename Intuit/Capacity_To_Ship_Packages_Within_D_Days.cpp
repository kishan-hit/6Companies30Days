int func(vector<int>arr,int n,int cap ){
        int sum=0,curr=0,d=1;
        int i=0;
        while(i<n){
            while(i<n && sum+arr[i]<=cap){
                sum+=arr[i];
                i++;
            }
            if(i==n)
                return d;
            if(i<=n-1){
                sum = 0;
                d++;
            }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(),sum=0;
        int lo=INT_MIN,hi;
        for(int w:weights){
            sum+=w;
            lo = max(lo,w);
        }
        int i=0,curr=0;
        int ans=INT_MAX;
        while(hi>=lo){
            int mid = (hi+lo)/2;
            int d = func(weights,n,mid);
            if(d<=days){
            	hi = mid-1;
                ans = min(ans,mid);
            }
            else
                lo = mid+1;
        }
        return ans;
    }
