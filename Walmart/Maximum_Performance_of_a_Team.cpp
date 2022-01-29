//Time complexity: O(nlogn)
//Auxiliary space: O(k)
int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long long mod = 1e9+7;
        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++) 
            v.push_back({efficiency[i],speed[i]});
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>> p;
        long res=INT_MIN,sum=0;
        for(const auto& [it1,it2]:v){
            if(p.size()>=k){
                sum -= p.top();
                p.pop();
            }
            p.push(it2);
            sum += it2;
            res = max(res,sum*it1);
        }
        return res%mod;
    }
