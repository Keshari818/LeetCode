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
    void dfs(TreeNode* root,int val, int curr, int depth){
        if(root==NULL)
            return ;
        
        if(curr==depth-1){
            TreeNode* leftside=root->left;
            root->left=new TreeNode(val);
            root->left->left=leftside;
            
            
            TreeNode* rightside=root->right;
            root->right=new TreeNode(val);
            root->right->right=rightside;
        }
        if(root->left!=NULL)
            dfs(root->left,val,curr+1,depth);
        if(root->right!=NULL)
            dfs(root->right,val,curr+1,depth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        
        dfs(root,val,1,depth);
        return root;
    }
};