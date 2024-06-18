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
    void traverse(TreeNode *root, unordered_map<int,int>&freq){
        if(root==NULL)
            return;
        
        traverse(root->left,freq);
        freq[root->val]++;
        traverse(root->right,freq);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>freq;    
        traverse(root,freq);
        int maxi=0; 
        for(auto ele:freq)
            maxi=max(maxi,ele.second);
        
        vector<int>res;
        for(auto ele:freq){
            if(ele.second==maxi)
                res.push_back(ele.first);
        }
        return res;
    }
};