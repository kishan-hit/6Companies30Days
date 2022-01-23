int atoi(string str) {
        //Your code here
        //Time Complexity: O(|S|), |S| = length of string str.
        //Auxiliary Space: O(1)
        int ans=0;
       int i=0;
       int len=str.length();
       int flag=0;
       while(i<len){
           if(i==0 && str[i]=='-'){
               flag=1;
               i++;
               continue;
           }
           if(str[i]<'0' || str[i]>'9')
               return -1;
           int t=str[i]-'0';
           ans=ans*10 + t;
           i++;
       }
       return flag==1?(-1*ans):ans;
    }
