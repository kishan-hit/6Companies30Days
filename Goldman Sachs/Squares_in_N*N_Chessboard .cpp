public:
  
    //Time Complexity: O(1)
    //Auxiliary Space: O(1)
    
    long long squaresInChessBoard(long long N) {
        // code here
        long long cnt=0;
        for(long long i=1;i<=N;i++)
            cnt += (i*i);
        return cnt;
    }
