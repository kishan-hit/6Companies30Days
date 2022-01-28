long long power(int N,int R)
    {
       //Your code here
       //Time Complexity: O(LogN)
        long long m = 1e9 + 7;
        long long res = 1;
        while(R>0){
        	if(R%2 == 0){
            	N = (N%m * N%m)%m;
               	R = R/2;
            }
           	else{
       			res = (res%m * N%m)%m;
           		R = R-1;
           	}
     	}
     	return res%m;
    }
