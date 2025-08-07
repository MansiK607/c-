class Solution {
public:
int setBit(int n){
    int cnt=0;
    while(n>1){
        if(n%2==1) cnt++;
        n=n/2;
    }
    if(n==1) cnt++;
    return cnt;
}
    int minBitFlips(int start, int goal) {
        return setBit(start^goal);
    }
};