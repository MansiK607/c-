class Solution {
public:
int lowerBound(vector<int> &nums,int target){
    int n=nums.size();
    int ans=n;
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int upperBound(vector<int> &nums,int target){
    int n=nums.size();
    int ans=n;
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
       
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int lb=lowerBound(nums,target);
        int ub=upperBound(nums,target);
        if(lb==n||nums[lb]!=target){
            ans.push_back(-1);
            ans.push_back(-1);
             return ans;
        }
         
       ans.push_back(lb);
       ans.push_back(ub-1);
       return ans;
    }
};