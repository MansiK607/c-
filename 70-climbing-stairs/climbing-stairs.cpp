class Solution {
public:
int fun(int n,vector<int> &dp){
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
    int climbStairs(int n) {
      vector<int> dp(n+1,-1);
      int ans=fun(n,dp);
      return ans;
    }
};