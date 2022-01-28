string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> p;
        for(auto it: nums){
            int n=it.size();
            p.push({n, it});
            if(p.size()>k) 
                p.pop();
        }
        return p.top().second;
    }
