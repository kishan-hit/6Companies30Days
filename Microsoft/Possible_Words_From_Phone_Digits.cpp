vector<string> possibleWords(int a[], int N)
    {
        //Time Complexity: O(4N * N)
        //Auxiliary Space: O(N)
        //Your code here
        unordered_map<int,vector<string>>v;
        v[2] = {"a","b","c"};  
        v[3] = {"d","e","f"};   
        v[4] = {"g","h","i"};   
        v[5] = {"j","k","l"};       
        v[6] = {"m","n","o"};
        v[7] = {"p","q","r","s"};
        v[8] = {"t","u","v"};
        v[9] = {"w","x","y","z"};
        vector<string> first = v[a[0]];
        for(int i=1;i<N;i++){
            vector<string> second = v[a[i]],res;
            for(auto it1:first)
                for(auto it2:second)
                    res.push_back(it1+it2);
            first = res;
        }
        return first;
    }
