public:
    //Time complexity: O(n)
    //Space complexity: O(1)
    
    int longestMountain(vector<int>& arr) {
        int maxi=0,temp1,temp2;
        int n=arr.size();
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                temp1=i-1;
                temp2=i+1;
                while(temp1>0 && arr[temp1]>arr[temp1-1])
                    --temp1;
                while(temp2<n-1 && arr[temp2]>arr[temp2+1])
                    ++temp2;
                maxi = max(maxi,(temp2-temp1+1));
                i = temp2;
            }
        }
        return maxi;
    }
