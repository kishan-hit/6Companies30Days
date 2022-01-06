public:
	// Time Complexity: O(26 * n)
	// Space Complexity: O(26)
	
		string FirstNonRepeating(string A){
		    // Code here
		    queue<int> q;
		    string res="";
		    vector<int> v(26);
		    for(int i=0;i<A.size();i++){
		        v[A[i]-'a']++;
		        if(v[A[i]-'a']==1)
		            q.push(A[i]);
		        while(!q.empty() && v[q.front()-'a']!=1)
		            q.pop();
		        if(!q.empty())
		            res += q.front();
		        else
		            res += '#';
		    }
		    return res;
		}
