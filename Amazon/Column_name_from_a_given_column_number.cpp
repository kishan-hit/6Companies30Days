public:
    
    //Time Complexity: O(LogN)
    // Auxiliary Space: O(1)
    
    string colName (long long int n)
    {
        // your code here
        string res="";
        while(n>0){
            char temp = 'A' + (n-1)%26;
            res += temp;
            n = (n-1)/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
