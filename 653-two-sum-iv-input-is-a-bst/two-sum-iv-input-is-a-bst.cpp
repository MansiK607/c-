/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  vector<int> inorder(TreeNode*root){
    vector<int> ans;
    if(root==NULL) return ans;
    vector<int> left=inorder(root->left);
    ans.insert(ans.end(),left.begin(),left.end());
    ans.push_back(root->val);
    vector<int> right=inorder(root->right);
    ans.insert(ans.end(),right.begin(),right.end());
    return ans;
  }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        vector<int> res=inorder(root);
        int n=res.size();
        if(n==1) return false;
        int first=0;
        int last=n-1;
       while(first<last){
            int sum=res[first]+res[last];
            if(sum==k) return true;
            if(sum>k){
                last--;
            }
            else{
                first++;
            }
        }
        return false;
    }
};