class Solution {
public:
int houseRobber(int n,vector<int> &nums,vector<int> &dp){
    if(n==0) return nums[n];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int take=nums[n]+houseRobber(n-2,nums,dp);
    int nottake=houseRobber(n-1,nums,dp);
    return dp[n]=max(take,nottake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return houseRobber(n-1,nums,dp);
    }
};