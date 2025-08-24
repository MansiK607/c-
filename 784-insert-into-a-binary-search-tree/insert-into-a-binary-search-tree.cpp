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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*curr=root;
        TreeNode*node=new TreeNode(val);
        if(!root) return node;
        while(curr!=NULL){
            if(val<curr->val){
                if(curr->left==NULL){
                    curr->left=node;
                    break;
                }
                else{
                    curr=curr->left;
                }
            }
            else{
                if(curr->right==NULL){
                    curr->right=node;
                    break;
                }
                else{
                    curr=curr->right;
                }
            }
        }
        return root;
    }
};