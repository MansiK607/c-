/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool getPath(TreeNode*root,vector<TreeNode*> &arr,TreeNode*x){
    if(!root) return false;
    arr.push_back(root);
    if(root==x) return true;
    if(getPath(root->left,arr,x) || getPath(root->right,arr,x)) return true;
    arr.pop_back();
    return false;
}
vector<TreeNode*> solve(TreeNode*root,TreeNode*x){
    vector<TreeNode*> arr;
    if(root==NULL) return arr;
    getPath(root,arr,x);
    return arr;
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> arr1= solve(root,p);
        vector<TreeNode*> arr2= solve(root,q);
        TreeNode*node=root;
       int n=min(arr1.size(),arr2.size());
       for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]){
            node=arr1[i];
        }
        else break;
       }
        return node;
    }
};