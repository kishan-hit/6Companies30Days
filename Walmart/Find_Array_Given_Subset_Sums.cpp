vector<int> recoverArray(int n, vector<int>& sums) {
        sort(sums.begin(), sums.end()); 
        vector<int> v; 
        while(n--){
            int diff = sums[1]-sums[0]; 
            unordered_map<int,int> m; 
            vector<int> v1,v2; 
            bool flag = false; 
            for (auto& it : sums) 
                if (!m[it]) {
                    v1.push_back(it); 
                    m[it+diff]++; 
                    if(it==0) 
                        flag = true; 
                } else{
                    v2.push_back(it); 
                    m[it]--; 
                }
            if(flag){
                v.push_back(diff); 
                sums = v1; 
            } 
            else{
                v.push_back(-diff); 
                sums = v2; 
            }
        }
        return v; 
    }
