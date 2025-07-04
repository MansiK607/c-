class Solution {
public:
int maxElement(vector<int> &nums){
    int maxi=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}
int sumOfDiv(vector<int> &nums,int d){
    int ans=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        ans+=(nums[i]+d-1)/d;
    }
    return ans;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans=-1;
        int low=1, high=maxElement(nums);
        while(low<=high){
            int mid=(low+high)/2;
            if(sumOfDiv(nums,mid)<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};