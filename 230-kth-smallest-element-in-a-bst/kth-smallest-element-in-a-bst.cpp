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
   vector<int> preorder(TreeNode*root){
      vector<int> result;
        if(root==NULL) return result;
        result.push_back(root->val);
        vector<int> left=preorder(root->left);
        vector<int> right=preorder(root->right);
        result.insert(result.end(),left.begin(),left.end());
        result.insert(result.end(),right.begin(),right.end());
        return result;
   }
    int kthSmallest(TreeNode* root, int k) {
      vector<int> ans=preorder(root);
      sort(ans.begin(),ans.end());
      return ans[k-1];
    }
};