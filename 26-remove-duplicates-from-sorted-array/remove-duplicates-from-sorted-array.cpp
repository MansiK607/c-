class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int index=0;
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            nums[index]=it;
            index++;
        }
        return index;
    }
};