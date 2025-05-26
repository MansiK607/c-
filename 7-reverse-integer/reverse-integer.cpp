class Solution {
public:
    int reverse(int x) {
        int revNum=0;
        if(pow(2,-31)>=x>=(pow(2,31)+1)){
            return 0;
        }
        while(x!=0){
            int ld=x%10;
            
            x=x/10;
             if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
            return 0 ;
        }
        revNum=(revNum*10)+ld;
        }
        return revNum;
    }
  
};