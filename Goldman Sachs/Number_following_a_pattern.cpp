public:
    //Time Complexity: O(N)
    //Auxiliary Space: O(1)
    
    string printMinNumberForPattern(string S){
        // code here
        int t=1,n=S.length();
        string st="";
        for(int i=0;i<=n;i++)
            st += (t++ + '0');
        int j=0,k=1;
        for(int i=0;i<n;i++){
            if(S[i]=='I'){
                reverse(st.begin()+j,st.begin()+k);
                j = k;
            }
            ++k;
        }
        if(S[n-1]=='D')
            reverse(st.begin()+j,st.begin()+k);
        return st;
    }
