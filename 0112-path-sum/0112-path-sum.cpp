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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        stack<TreeNode*>st1;
        stack<int>st2;
        
        st1.push(root);
        st2.push(root->val);
        while(!st1.empty()){
            TreeNode* temp1=st1.top();
            st1.pop();
            int temp2=st2.top();
            st2.pop();
            if(temp1->left==NULL && temp1->right==NULL && temp2==targetSum)
                return true;
            if(temp1->left!=NULL){
                st1.push(temp1->left);
                st2.push(temp1->left->val+temp2);
            }
            
            if(temp1->right!=NULL){
                st1.push(temp1->right);
                st2.push(temp1->right->val+temp2);
            }
        }
        return false;
    }
};