vector<string> generate(int N)
{
    //Time Complexity : O(N log2N)
    //Auxilliary Space : O(N log2N)
    
	// Your code here
	vector<string>ans;
    string s="";
	// Your code here
	for(int i=1;i<=N;i++){
	    int temp=i;
	    while(temp){
	        int tp= temp%2;
	        s=to_string(tp)+s;
	        temp/=2;
	    }
	    ans.push_back(s);
	    s="";
	}
	return ans;
}
