//https://leetcode.com/problems/validate-binary-search-tree/

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

    bool search(TreeNode* root, long lowLim, long highLim)
    {
        if(!root)
        {
            return true;
        }
        if(root->val <= lowLim || root->val >= highLim)
        {
            return false;
        }
        return search(root->right, root->val, highLim) && search(root->left, lowLim, root->val);
    }

    bool isValidBST(TreeNode* root) {
        return search(root, LONG_MIN, LONG_MAX);
    }
};