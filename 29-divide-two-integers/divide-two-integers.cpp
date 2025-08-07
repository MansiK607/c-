class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        bool sign=true;
        if(dividend>=0 && divisor<0) sign=false;
        if(dividend<0 && divisor>0) sign=false;
        long ans=0;
        long n=labs(dividend);
        long d=labs(divisor);
        while(n>=d){
            long cnt=0;
            while(n>=(d*(1L<<(cnt+1)))){
                cnt++;
            }
                ans=ans+(1L<<cnt);
                n=n-(d*(1L<<cnt));
            
        }
        if(ans==(1L<<31) && sign==true) return INT_MAX;
        if(ans==(1L<<31) && sign==false) return INT_MIN;
        return sign ? ans:-ans;
    }
};