class Solution {
public:
int paths(int m,int n,vector<vector<int>> &grid,vector<vector<int>> &dp){
    if(m==0 && n==0) return grid[m][n];
    if(m<0 ||n<0) return INT_MAX;
    if(dp[m][n]!=-1) return dp[m][n];
    int up=INT_MAX;
    int left=INT_MAX;
    if(m>0) up=grid[m][n]+paths(m-1,n,grid,dp);
    if(n>0) left=grid[m][n]+paths(m,n-1,grid,dp);
    return dp[m][n]=min(up,left);
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return paths(m-1,n-1,grid,dp);
    }
};