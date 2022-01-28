vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        //Time Complexity: O(N)
           int mini = INT_MAX;
           int maxi = INT_MIN;
           int l=0,r=N-1;
           while(l<r){
               mini = min(mini,arr[l]);
               maxi = max(maxi, arr[r]);
               if(maxi>mini){
                   for(int i=l+1;i<=r-1;i++){
                       if(arr[i]<maxi && arr[i]>mini)
                           return {mini,arr[i],maxi};
                   }
               }
               ++l;
               --r;
           }
           return {};    
    }
