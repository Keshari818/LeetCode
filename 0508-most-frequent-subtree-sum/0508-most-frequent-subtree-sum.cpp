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
    int maxx;

    int traverse(TreeNode* root, unordered_map <int, int> &mp){
        if(!root) 
            return 0;
        if(!root->left && !root->right){
            mp[root->val]++;
            maxx = max(maxx, mp[root->val]);
            return root->val;
        }

        int lstSum = traverse(root->left, mp);
        int rstSum = traverse(root->right, mp);

        int subTreeSum = root->val + lstSum + rstSum;
        mp[subTreeSum]++;
        maxx = max(maxx, mp[subTreeSum]);
        return subTreeSum; 
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        maxx = INT_MIN;
        unordered_map <int, int> mp;
        traverse(root, mp);
        vector <int> res;
        for(auto x : mp){
            if(x.second == maxx) 
                res.push_back(x.first);
        }

        return res;
    }
};