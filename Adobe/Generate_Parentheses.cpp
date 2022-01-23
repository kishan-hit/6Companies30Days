//Time Complexity: O(2N * N)
    //Auxiliary Space: O(2*N*X), X = Number of valid Parenthesis
    vector<string> v;
    void res(string s,int n,int opened){
        if(n!=0)
            res(s+"(",n-1,opened+1);
        if(opened!=0)
            res(s+")",n,opened-1);
        if(n==0 && opened==0)
            v.push_back(s);
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        res("",n,0);
        return v;
    }
