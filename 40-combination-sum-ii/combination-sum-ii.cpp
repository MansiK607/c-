class Solution {
public:
void findCombination(int index,int target,vector<int> &ds,
vector<int> &candidates,vector<vector<int>> &ans){
    int n=candidates.size();
        if(target==0){
          ans.push_back(ds);
          return;
        }
   for(int i=index;i<n;i++){
    if(i>index && candidates[i]==candidates[i-1]) continue;
    if(candidates[i]>target) break;
    ds.push_back(candidates[i]);
    findCombination(i+1,target-candidates[i],ds,candidates,ans);
    ds.pop_back();
   }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0,target,ds,candidates,ans);
        return ans;
    }
};