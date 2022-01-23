string amendSentence (string s)
    {
        // your code here
        //Time Complexity: O(N)
        //Auxiliary Space: O(N) 
        string ans;
        int n=s.size(),start=0,end=1;
        while(end<=n){
            if((isupper(s[end]))||end==n){
                string st=s.substr(start,end-start);
                st[0]=tolower(st[0]);
                ans+=st;
                ans.push_back(' ');
                start=end;
            }
            end++;
        }
        ans.pop_back();
        return ans;
    }
