int minInsAndDel(int A[], int B[], int N, int M) {
        // code here
        //Time Complexity: O(NlogN)
        //Auxiliary Space: O(N)
        vector<int> v,ans;
        vector<int> m((1e5+1),0);
        for(int i=0;i<M;i++)
            m[B[i]]++;
        for(int i=0;i<N;i++){
            if(m[A[i]])
                v.push_back(A[i]);
        }
        for(auto it:v){
            auto x = lower_bound(ans.begin(),ans.end(),it);
            if(x!=ans.end())
                *x = it;
            else
                ans.push_back(it);
        }
        int res = N + M - 2*ans.size();
        return res;
    }
