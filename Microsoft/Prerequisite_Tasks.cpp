bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    
	    //Time Complexity: O(N + P)
	    //Auxiliary Space: O(N + P)
	    
    	 vector<int> v[N]; 
         for(auto i:prerequisites) 
             v[i.first].push_back(i.second);
         vector<int> indegree(N);
         for(int i=0;i<N;++i) 
             for(auto it : v[i]) 
                 indegree[it]++;
         queue<int> q;
         for(int i = 0; i < N; ++i) 
             if(indegree[i] == 0) 
                 q.push(i);
         int count = 0;
         while(!q.empty()) {
             int node = q.front();
             count ++;
             q.pop();
             for(auto i:v[node]) {
                 indegree[i]--;
                 if(indegree[i] == 0) {
                     q.push(i);
                 }
             }
         }
         if(count == N) 
            return true;
         return false;
	}
