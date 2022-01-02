public:
  
    //Time Complexity: O(n)
    //Space Complexity : O(n)
    
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n=nums.size();
        if(n%2!=0)
            return false;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
              m[nums[i]%k]++;
        for(int i=0;i<n;i++){
            int rem=nums[i]%k;
            if(rem==0){
                if(m[0]%2!=0){
                    return false;
                }
            }
            else if(2*rem==k){
                if(m[0]%2!=0){
                    return false;
                }
            }
            else if(m[rem]!=m[k-rem])
                return false;
        }
        return true;
    }
