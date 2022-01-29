//Time Complexity : O(logn)
int divide(int dividend, int divisor){
        if(dividend == 0)   
            return 0;
        if(divisor==1)
            return dividend;
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        int sign = ((dividend<0)^(divisor<0))?-1:1;   
        long long temp1 = labs(dividend);
        long long temp2 = labs(divisor);
        long res = exp(log(temp1)-log(temp2));
        long long a=0,b=0;
        for(long long i=31;i>=0;i--){
            if(b+(temp2<<i)<=temp1){
                b += temp2<<i;
                a = a|(1<<i);
            }
        }
        a *= sign;
        return (a>=INT_MAX || a<INT_MIN)? INT_MAX:a;
    }
