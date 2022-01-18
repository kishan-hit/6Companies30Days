vector<int> subarraySum(int arr[], int n, long long s)
    {
        //Time Complexity: O(N)
        //Auxiliary Space: O(1)


        // Your code here
        int i=0,j=0,sum=0;
        while(j<n){
            sum += arr[j];
            if(sum==s){
                return{i+1,j+1};
            }
            else if(sum>s){
                while(sum>s){
                    sum -= arr[i];
                    ++i;
                    if(sum==s){
                        return {i+1,j+1};
                    }
                }
            }
            ++j;
        }
        return {-1};
    }
