class Solution {
public:
int houseRobber(int n,vector<int> &nums){
    int prev=nums[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int take=nums[i];
        if(i>1) take=take+prev2;
        int nottake=prev;
        int curri=max(take,nottake);
        prev2=prev;
        prev=curri;
    }
    return prev;
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        return houseRobber(n,nums);
    }
};