class Solution {
public:
int path(int i,int j,vector<vector<int>> &triangle,vector<vector<int>> &dp){
    int n=triangle.size();
    if(dp[i][j]!=-1) return dp[i][j];
    for(int j=0;j<n;j++){
        dp[n-1][j]=triangle[n-1][j];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i;j>=0;j--){
           int down=triangle[i][j]+dp[i+1][j];
           int diagonal=triangle[i][j]+dp[i+1][j+1];
           dp[i][j]=min(down,diagonal);
        }
    }
    
    return dp[0][0];
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return path(0,0,triangle,dp);
    }
};