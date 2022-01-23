vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        //Time Complexity: O(n)
        //Auxiliary Space: O(n)
        map<string,int> m;
        int maxi=0;
        string s;
        vector<string> v;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        for(auto it:m){
            if(it.second>maxi){
                maxi = it.second;
                s = it.first;
            }
        }
        v.push_back(s);
        v.push_back(to_string(maxi));
        return v;
    }
