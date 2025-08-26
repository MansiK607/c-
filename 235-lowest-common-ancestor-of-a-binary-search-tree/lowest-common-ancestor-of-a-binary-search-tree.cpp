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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*node=root;
        vector<TreeNode*> ans=path(root,p);
        vector<TreeNode*> res=path(root,q);
        int n=min(ans.size(),res.size());
        for(int i=0;i<n;i++){
            if(ans[i]==res[i]) node=ans[i];
            else break;
        }
        
        return node;
    }
    
    bool getPath(TreeNode*root,vector<TreeNode*> &arr,TreeNode*x){
        if(!root) return false;
        arr.push_back(root);
        if(root==x) return true;
        if(getPath(root->left,arr,x) || getPath(root->right,arr,x)) return true;
        arr.pop_back();
        return false;
    }
    vector<TreeNode*> path(TreeNode*root,TreeNode*x){
        vector<TreeNode*> ans;
        if(root==NULL) return ans;
        getPath(root,ans,x);
        return ans;
    }
};