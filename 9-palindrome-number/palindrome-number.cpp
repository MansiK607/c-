class Solution {
public:
    bool isPalindrome(int x) {
        int revNum=0;
        int n=x;
        while(x!=0){
            int ld=x%10;
            x=x/10;
            if(revNum>INT_MAX/10||revNum<INT_MIN/10){
                return 0;
            }
            revNum=(revNum*10)+ld;
            
        }
      
       if(n<0||revNum!=n){
          return false;
       }
       else {
        return true;
         }
    }      
};