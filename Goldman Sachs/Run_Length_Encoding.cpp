//Time Complexity: O(N), N = length of given string.
//Auxiliary Space: O(1)

string encode(string src)
{     
  //Your code here 
  int n=src.length();
  string s="";
  int cnt=0;
  s += src[0];
  for(int i=1;i<n;i++){
        if(src[i]==src[i-1])
            ++cnt;
        else{
            s += (cnt+1)+'0';
            s += src[i];
            cnt=0;
        }
    }
    s += (cnt+1)+'0';
    return s;
}     
