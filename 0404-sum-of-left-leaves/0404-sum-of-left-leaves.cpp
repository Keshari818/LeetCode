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
    int sum=0;
    void result(TreeNode* root, bool isleft){
        if(isleft && !root->left && !root->right){
            sum+=root->val;
            return ;
        }
        if(root->left)
            result(root->left,true);
        if(root->right)
            result(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        result(root,false);
        return sum;
    }
};