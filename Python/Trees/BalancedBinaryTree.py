#https://leetcode.com/problems/balanced-binary-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, root):
        if root == None:
            return 0
        return 1 + max(self.dfs(root.left), self.dfs(root.right))

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root == None:
            return True
        lDepth = self.dfs(root.left)
        rDepth = self.dfs(root.right)
        return (abs(rDepth - lDepth) <= 1 ) and self.isBalanced(root.left) and self.isBalanced(root.right)