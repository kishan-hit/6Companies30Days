vector<vector<int> > fourSum(vector<int> &arr, int k) {
        //Time Complexity: O(N3)
        //Auxiliary Space: O(N2)
        
        // Your code goes here
        sort(arr.begin(),arr.end());
        vector<vector<int>> vec;
        set<vector<int>> v;
        int f=0;
        for(int i=0;i<arr.size()-2;i++){
            for(int j=i+1;j<arr.size()-1;j++){
                int s=j+1,e=arr.size()-1;
                while(s<e){
                    int sum=arr[i]+arr[j]+arr[s]+arr[e];
                    if(sum==k){
                        v.insert({arr[i],arr[j],arr[s],arr[e]});
                        ++s;
                        --e;
                        f=1;
                    }
                    else if(sum>k)
                        --e;
                    else
                        ++s;
                }
            }
        }
        for(auto i:v)
            vec.push_back(i);
        return vec;
    }
