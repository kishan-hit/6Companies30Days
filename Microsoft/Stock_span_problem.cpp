vector <int> calculateSpan(int price[], int n)
    {
        //Time Complexity: O(N)
        //Auxiliary Space: O(N)
        
       // Your code here
       vector<int> v;
       stack<int> s;
       for(int i=0;i<n;i++){
           if(s.size()==0)
                v.push_back(-1);
            else if(s.size()>0 && price[s.top()]>price[i])
                v.push_back(s.top());
            else{
                while(s.size()>0 && price[s.top()]<=price[i])
                    s.pop();
                if(s.empty())
                    v.push_back(-1);
                else
                    v.push_back(s.top());
            }
            s.push(i);
       }
       for(int i=0;i<n;i++)
            v[i] = i - v[i];
        return v;
    }
