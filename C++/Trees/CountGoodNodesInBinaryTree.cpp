//https://leetcode.com/problems/count-good-nodes-in-binary-tree/

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

int findGood(TreeNode* root, stack<int> seen)
{
    if(!root)
    {
        return 0;
    }
    if(root->val >= seen.top())
    {
        seen.push(root->val);
        return 1 + findGood(root->left, seen) + findGood(root->right, seen);
    }
    else
    {
        return findGood(root->left, seen) + findGood(root->right, seen);
    }
}
class Solution {
public:
    int goodNodes(TreeNode* root) {
        if(!root)
        {
            return 0;
        }   
        stack<int> numsSeen;
        numsSeen.push(root->val);
        return findGood(root, numsSeen);
    }
};