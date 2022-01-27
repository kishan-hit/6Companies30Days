//Time complexity - O(nlgn)
bool bs(vector<int>&nums, long long mid, long long n,int m){
        long long sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]>mid)
                return false;
            sum+=nums[i];
            if(sum>mid){
                sum = nums[i];
                cnt++;
            }
        }
        cnt++;
        if(cnt<=m)
            return true;
        return false;
    }
    int splitArray(vector<int>& nums, int m) {
        long long sum=0,n= nums.size();
        for(auto it: nums)
            sum+=it;
        long long lo=1,hi = sum;
        int ans=0;
        while(lo<=hi){
            long long mid = lo+(hi-lo)/2;
            if(bs(nums,mid,n,m)){
                ans =mid;
                hi = mid-1;
            }
            else
                lo = mid+1;
        }
        return ans;
    }
