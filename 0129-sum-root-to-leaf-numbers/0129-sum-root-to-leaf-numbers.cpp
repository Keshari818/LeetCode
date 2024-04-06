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
    void inorder(TreeNode* root,int &res,int sum){
        if(!root)
            return ;
        sum=(sum*10)+root->val;
        if(root->left==NULL && root->right==NULL){
            res+=sum;
            return;
        }
        inorder(root->left,res,sum);
        inorder(root->right,res,sum);
        
        
    }
    int sumNumbers(TreeNode* root) {
        int res=0;
        inorder(root,res,0);
        return res;
    }
};