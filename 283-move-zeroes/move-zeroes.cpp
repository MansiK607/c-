class Solution {
public:
    vector<int> moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
            j=i;
            break;
        }
        
    }
    if(j==-1) return nums;
    for(int i=j+1;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    return nums;
}
};