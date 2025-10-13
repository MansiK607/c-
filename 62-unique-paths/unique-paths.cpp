class Solution {
public:
int paths(int i,int j,vector<vector<int>> &dp){
    
   for(int row=0;row<i;row++){
    for(int col=0;col<j;col++){
       
        if(row==0 && col==0){
             dp[row][col]=1;
        }
        else{
         int up=0;
        int left=0;
        if(row>0) up=dp[row-1][col];
        if(col>0) left=dp[row][col-1];
        dp[row][col]=up+left;
        }
    }
   }
   return dp[i-1][j-1];
}
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m,vector<int> (n,-1));
       return paths(m,n,dp);
    }
};