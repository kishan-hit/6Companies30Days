 vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> v(numCourses,vector<int>());
        vector<int> vec(numCourses); 
        vector<int> res;
        queue<int> q;
        for(vector<int> i:prerequisites){
            v[i[1]].push_back(i[0]);
            vec[i[0]]++;
        }
        for(int i=0;i<numCourses;i++)
            if(vec[i] == 0)
                q.push(i);
        while(!q.empty()){
            int temp = q.front();
            q.pop();
            res.push_back(temp);
            for(int i:v[temp]){
                if(--vec[i] == 0){
                    q.push(i);
                }
            }
        }
        if(res.size()==numCourses) 
            return res;
        return {};
    }
