public:
    //Time Complexity: O(|s| * n * max|contact[i]|)
    //Auxiliary Space: O(n * max|contact[i]|)
    
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        set<string> st;
        int sz=s.length();
        for(int i=0;i<n;i++)
            st.insert(contact[i]);
        vector<vector<string>> v(sz);
        for(int i=0;i<sz;i++){
            for(auto it:st)
                if(s.substr(0,i+1)==it.substr(0,i+1))
                    v[i].push_back(it);
            if(v[i].size()==0)
                v[i].push_back("0");
        }
        return v;
    }
