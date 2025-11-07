class Solution {
public:
bool findSubset(int n,int target,vector<int> &nums,vector<vector<int>> &dp){
  if(target==0) return true;
  if(n==0) return (nums[0]==target);
  if(dp[n][target]!=-1) return dp[n][target];
  bool notTake=findSubset(n-1,target,nums,dp);
  bool take=false;
  if(nums[n]<=target){                                             
  take=findSubset(n-1,target-nums[n],nums,dp);
  }
  return dp[n][target]=(take || notTake);
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
 return findSubset(n-1,target,nums,dp);
    }
   
};