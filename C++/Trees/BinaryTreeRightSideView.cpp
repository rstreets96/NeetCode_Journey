//https://leetcode.com/problems/binary-tree-right-side-view/

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        deque<TreeNode*> q;
        q.push_back(root);

        int qSize;

        while(!q.empty())
        {
            vector<int> level;
            qSize = q.size();

            for(int i = 0; i < qSize; i++)
            {
                TreeNode* curr = q.front();
                q.pop_front();
                if(curr != NULL)
                {
                    level.push_back(curr->val);
                    q.push_back(curr->left);
                    q.push_back(curr->right);
                }
            }
            if(!level.empty())
            {
                res.push_back(level.back());
            }
        }
        return res;
    }
};