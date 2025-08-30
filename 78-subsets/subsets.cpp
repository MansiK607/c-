class Solution {
public:
void print(int index,int n,vector<int> & nums,vector<int> &ds,vector<vector<int>> &ans){
    if(index==n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[index]);
    print(index+1,n,nums,ds,ans);
    ds.pop_back();
    print(index+1,n,nums,ds,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
      int n=nums.size();
      int index=0;
      vector<int> ds;
      vector<vector<int>> ans;
      print(index,n,nums,ds,ans);
      return ans;
    }
};