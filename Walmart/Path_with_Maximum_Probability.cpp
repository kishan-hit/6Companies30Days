 double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> v(n);
        for(int i=0;i<edges.size();i++){
            v[edges[i][0]].emplace_back(edges[i][1],succProb[i]);
            v[edges[i][1]].emplace_back(edges[i][0],succProb[i]);
        }
        vector<double> vec(n);
        queue<int> q;
        q.push(start);
        vec[start] = 1;
        while (!q.empty()){
            int temp = q.front();
            q.pop();
            for(auto it:v[temp]){
                int nxt = it.first;
                double p = it.second;
                if (vec[nxt]<vec[temp]*p){
                    vec[nxt] = vec[temp]*p;
                    q.push(nxt);
                }
            }
        }
        return vec[end];
    }
