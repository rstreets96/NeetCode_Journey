#https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        
        def containsNode(root, p):
            if root == None:
                return False
            if root == p:
                return True
            else:
                return containsNode(root.left, p) or containsNode(root.right, p)
        
        if containsNode(root.left, p) and containsNode(root.left, q):
            return self.lowestCommonAncestor(root.left, p, q)
        elif containsNode(root.right, p) and containsNode(root.right, q):
            return self.lowestCommonAncestor(root.right, p, q)
        else:
            return root