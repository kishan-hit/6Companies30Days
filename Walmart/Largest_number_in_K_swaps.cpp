//Time Complexity: O(n!/(n-k)!) , where n = length of input string
    //Auxiliary Space: O(n)
    void findMaxUtil(string str,string &maxi,int k,int pos){
        if(k == 0)
            return;
        char maxm=str[pos];
        for(int i=pos+1;i<str.length();i++){
            if(maxm<str[i])
                maxm=str[i];
        }
        if(maxm!=str[pos])
            k--;
        for(int i=str.length()-1;i>=pos;i--){
            if(str[i] == maxm){
                swap(str[i],str[pos]);
                if(str.compare(maxi)>0)
                    maxi = str;
                findMaxUtil(str,maxi,k,pos+1);
                swap(str[i],str[pos]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string maxi = str;
       findMaxUtil(str,maxi,k,0);
       return maxi;
    }
