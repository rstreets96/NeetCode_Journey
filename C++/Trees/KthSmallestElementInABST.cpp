//https://leetcode.com/problems/kth-smallest-element-in-a-bst/

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
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int, vector<int>, greater<int>> vals;
        arrangeVals(root, &vals);
        for(int i = 1; i<k; i++)
        {
            vals.pop();
        }
        return vals.top();
    }

private:
    void arrangeVals(TreeNode* root, priority_queue<int, vector<int>, greater<int>> *vals)
    {
        if(!root)
        {
            return;
        }
        vals->push(root->val);
        arrangeVals(root->left, vals);
        arrangeVals(root->right, vals);
        return;
    }
};

