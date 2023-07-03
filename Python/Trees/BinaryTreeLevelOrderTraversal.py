#https://leetcode.com/problems/binary-tree-level-order-traversal/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root == None:
            return []
        level = 1
        output = []
        output.append([root.val])

        def levelList(nodes):
            if nodes:
                nonlocal level
                output.append([])
                for node in nodes:
                    if node:
                        output[level].append(node.val)
                level += 1
                newLevel = []
                for node in nodes:
                    if node:
                        newLevel.append(node.left)
                        newLevel.append(node.right)
                levelList(newLevel)
            else:
                return

        levelList([root.left, root.right])
        return output[:-1]