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
    int ans(TreeNode* root, int &max_cross) {
        if(root == NULL) return -1;
        if(root == NULL || (root->left == NULL && root->right == NULL))
            return 0;

        int left_max = ans(root->left, max_cross);
        int right_max = ans(root->right, max_cross);

        max_cross = max(max_cross, left_max + right_max + 2);
        return max(left_max, right_max) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max_cross = 0;
        int x = ans(root, max_cross);
        return max(max_cross, x);
    }
};